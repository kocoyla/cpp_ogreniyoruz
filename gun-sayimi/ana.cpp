#include <iostream>
#include <ctime>
#include <string>

using namespace std;

typedef unsigned short Sayac;

int main2(int argc, char** argv) {
  cout << "Program: " << argv[0] << endl;
  cout << argc-1 << " tane girdi var. Girdiler:" << endl;
  for (Sayac s = 1; s < argc; s++) {
    cout << s << ": " << argv[s] << endl;
  }
  cout << "Bitti." << endl;
  return 0;
}

/*
   ilk yazar: Krishna Teja Yeluripati
   https://sololearn.com/compiler-playground/ccd7Z974E05T
*/ 

// doğum gününüzü gün ay yıl olarak girin.
// örneğin 3 Şubat 1999 için 3 2 1999 girin

// arayüzü Türkçeye çevirdik, Türkçe açıklamalar ekledik ve ufak tefek değişiklikler yaptık. örneğin, girdisiz de çalışsın. bu yıl kaç gün geçmiş saysın. -10000 yani milattan on bin yıl önceye kadar sayabilsin ...

// 2024.11.21

// global yani evrensel değişkenler.
// bu dosyada heryerden erişilebilir
// genelde sakınmak, çok kullanmamak gerek
int now_date, now_month, now_year;

// artık yıl hesabı
bool isLeapYear(int year) {
  return year % 4 == 0 && 
    (year % 100 != 0 || year % 400 == 0);
}

// verilen ayda kaç gün var?
int daysInMonth(int month, int year) {
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    return 31;
  else if (month == 4 || month == 6 || month == 9 || month == 11)
    return 30;
  else
    return isLeapYear(year) ? 29 : 28;
}

// doğum günü geçmişte olmalı
bool isDOBvalid(int date, int month, int year) {
  if (year > now_year) {
    return false;
  } else if (year == now_year) {
    if (month > now_month) {
      return false;
    } else if (month == now_month) {
      if (date > now_date)
	return false;
      else
	return true;
    } else {
      return true;
    }
  } else {
    return true;
  }
}

// yıl ay ve gün hatalı olmasın
bool isDATEvalid(int date, int month, int year) {
  // göbeklitepe yaklaşık 12 bin yaşında, kaç gün eder acaba?
  bool hataVar = year < -10000 || 
    month < 1 || month > 12 || 
    date < 1 || 
	   date > daysInMonth(month, year);
  return !hataVar;
}


// geçmiş günleri sayan işlev bu!
long int dates2days(int d1, int m1, int y1, int d2, int m2, int y2) {
  int days = 0, month, year;
    
  // doğum yılındaki günler.
  // doğum gününden sonrakiler sayılıyor
  days += daysInMonth(m1, y1) - d1 + 1;
  month = m1 + 1;
  while (month <= 12) {
    days += daysInMonth(month, y1);
    month++;
  }
    
  // sonraki yıllar ekleniyor
  // bu yıl da dahil!
  year = y1 + 1;
  while (year <= y2) {
    days += isLeapYear(year) ? 366 : 365;
    year++;
  }
    
  // bu yılın fazladan sayılan günlerini 
  // çıkarmak gerek
  days -= daysInMonth(m2, y2) - d2 + 1;
  month = m2 + 1;
  while (month <= 12) {
    days -= daysInMonth(month, y2);
    month++;
  }
    
  return days;
}

string date2day(int date, int month, int year) {
  long int day = dates2days(1, 1, 1, date, month, year) % 7;
  if (day == 0) return "Pazartesi";
  else if (day == 1) return "Salı";
  else if (day == 2) return "Çarşamba";
  else if (day == 3) return "Perşembe";
  else if (day == 4) return "Cuma";
  else if (day == 5) return "Cumartesi";
  else return "Pazar";
}

int main(int argc, char** argv) {
  // Doğum günü.
  // girdi yoksa bu yılın 1 Ocağı olsun
  int dob_date{1}, dob_month{1}, dob_year{2024}, num_days_ago(0);
  if (argc == 4) {
    dob_year = stoi(argv[1]);
    dob_month = stoi(argv[2]);
    dob_date = stoi(argv[3]);
  } else {
    if (argc == 2) {
      // verilen gün sayısı kadar geri gidelim. Tarih ne olur?
      num_days_ago = stoi(argv[1]);
      bool cik = false;
      if (num_days_ago > 1000000) {
	cout << "Bir milyondan çok olmasın." << endl;
	cik = true;
      }
      if (num_days_ago < 1) {
	cout << "Birden az olmasın." << endl;
	cik = true;
      }
      if (cik) return 1;
    } else {
      cout << "Ya bir doğum günü girin, ya da gün sayısı." << endl;
      return 1;
    }
  }
  // girdi "test" gibi bir yazı olabilir
  // cin sıfıra çevirir. onu düzeltelim
  if (dob_date == 0) dob_date = 1;
    
  // Bugünün tarihi
  time_t now = time(0);
  tm *ltm = localtime(&now);
  now_date = ltm -> tm_mday;
  now_month = 1 + ltm -> tm_mon;
  now_year = 1900 + ltm -> tm_year;
    
  // girdiyi doğrulamak gerek
  if (cin.fail())
    cout << "Hiç birşey girmediniz. 1 Ocak 2024'te doğan bir bebek olduğunuz varsayımıyla devam edelim 8-)" << endl;
  else if (!isDATEvalid(dob_date, dob_month, dob_year)) {
    cout << "Doğum gününü \"yıl ay gün\" olarak girin!" << endl
	 << "\"yıl\"   1 ile " << now_year << "," << endl
	 << "\"ay\"    1 ile 12," << endl  
	 << "\"gün\"   1 ile 31 arasında olsun." << endl
      /* << static_cast<
	 unsigned char>(236) */
	 << endl << "Örneğin: 1996 5 19";
    return 1;
  }
    
  // ya bugün girilmişse
  if (dob_date == now_date && dob_month == now_month && dob_year == now_year) {
    cout << dob_date << "/" 
	 << dob_month << "/" 
	 << dob_year
	 << " yani bugün sizin doğum gününüz olamaz! :-)";
    return 1;
  }
    
  // gelecek bir tarih de olmasın
  if (!isDOBvalid(dob_date, dob_month, dob_year)) {
    cout << dob_date << "/" 
	 << dob_month << "/" 
	 << dob_year << " henüz gelmedi!";
    return 1;
  }
    
  // dogum günü bugün olabilir!
  if (dob_date == now_date && dob_month == now_month)
    cout << "Doğum gününüz kutlu olsun!" << endl;
    
  // günleri sayan işlevi çağırıyor:
  long int age = dates2days(dob_date, dob_month, dob_year, now_date, now_month, now_year);
  cout << "Siz doğalı " 
       << (age == 1 ? "sadece " : "")
       << age << " gün olmuş." << endl;
    
  // tarihte doğum günü
  string gunAdi = date2day(dob_date, dob_month, dob_year);
  cout << "Doğum gününüz: "
       << dob_date << "/" 
       << dob_month << "/" 
       << dob_year << " " 
       << gunAdi << "." << endl;
    
  // bir sonraki doğum günü
  int next_bday_date = dob_date,
    next_bday_month = dob_month,
    next_bday_year = now_year + 1;
        
  if (dob_year < now_year &&
      (dob_month > now_month || (dob_month == now_month &&
				 dob_date > now_date)))
    next_bday_year = now_year;
        
  if (dob_date == 29 && dob_month == 2)
    while (!isLeapYear(next_bday_year))
      next_bday_year++;
            
  string gelecekDG = date2day(
			      next_bday_date,
			      next_bday_month, 
			      next_bday_year);
     
  
  string boşluk = string(15, ' ');
    
  cout << "Bir sonraki doğum gününüz:"
       << endl << boşluk 
       << next_bday_date << "/" 
       << next_bday_month << "/" 
       << next_bday_year << " "
       << gelecekDG << ".";
    
  cout << endl;
  return 0;
}
