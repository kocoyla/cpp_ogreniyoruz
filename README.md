Fen Lisesinde C++ Öğreniyoruz
=============================

Çevirimiçi Derleyiciler
-----------------------
[Sololearn](https://www.sololearn.com/en/compiler-playground/cpp)  `std::cin >> girdi;` çalışıyor. 

[OnlineGdb](https://onlinegdb.com/MOj93f6vtA)  Alttaki terminalde girdi ve çıktılar beraber.  

[CoLiRu](https://coliru.stacked-crooked.com/a/9a5a244a826e572a).  Sağ alttaki **Edit** tuşuna basın.  

[Jupyter: Okuryazar Programlama](https://jupyter.org/).  Literate programming. C++ için aşağıdaki linki kullanın.  

[Jupyter + C++](https://mybinder.org/v2/gh/jupyter-xeus/xeus-cling/stable?filepath=notebooks/xcpp.ipynb).  


Çevirimiçi Dersler (Ücretsiz)
--
[Giriş dersleri](https://www.sololearn.com/en/learn/courses/c-plus-plus-introduction)  Temel bilgiler. Bunun üzerinden geçmekte fayda var.  
[Orta seviye dersler](https://www.sololearn.com/en/learn/courses/c-plus-plus-intermediate)   Orta düzey bilgilerle devam.  
[Yapay beyinden öneriler](https://chatgpt.com/share/674775c0-d424-8009-835a-a1745715f8a7)  Ufak tefek hatalar var ama yine de çok faydalı bilgiler. Çok ileri düzey bilgilere kadar gidiveriyor.  

Diğer Siteler
--
[Project Euler](https://projecteuler.net/)  

[C++ referans](https://en.cppreference.com)  

İlk derste bazı temel yapıtaşlarını gördük 
-- 
Pekiştirmek için şu örnek programların üzerinden geçmekte fayda var.  

[İlk program](https://sololearn.com/compiler-playground/cHlx3KLO5G6d/)  
Sağ alttaki **RUN** tuşuna basın.  

[Temel veri tipleri](https://sololearn.com/compiler-playground/cPv2HfqDr8h7) sayı, kesirli sayı, harf, ikil(bool).  

[Girdi alma](https://sololearn.com/compiler-playground/c1JyEkLln8AK) cin>>girdi;  

[Kontrol yapıları](https://sololearn.com/compiler-playground/coLvDwg6K4Te) kontrol için if/else ve for/while döngüleri. Bir de basit bir işlev (function) tanımladık.

[İlk oyun!](https://onlinegdb.com/i4AbswzZtP) Rastgele sayı üretme yöntemi çok işe yarar.


İkinci ders
--
[Kod](https://www.sololearn.com/en/compiler-playground/cHXfjbO8i14U) işlevler, isim uzayı, yerel, küresel kapsam, dizilerle işlemler, temel türler, ikil(bool), harf(char), sayı(int), kesirli sayı(double). Bir de yazı (string), ama o temel değil, std yani standart kütüpten.  


Üçüncü ders
--
[Kod1](https://sololearn.com/compiler-playground/crpbSkBKD5ul) adres ve takma ad işlemcileri (pointer/reference).  
[Kod2](https://sololearn.com/compiler-playground/cUWBwZrMqVkd) akıllı sayı dizileri (vector<int>).   


Dördüncü ders
--
[Kod1](https://www.onlinegdb.com/fork/i4AbswzZtP) sayı tahmin etme oyunu.  
[Kod2](https://www.onlinegdb.com/fork/bbM6VmacX) doğum günü girdisiyle gün sayma.  


Beşinci ders
--
[Project Euler Birinci Problem](https://projecteuler.net/problem=1)  3'e ve 5'e bölünen sayıların toplamını bulmak için beraber kod yazdık. İki kaynak dosyamız var. **ana.cpp**:  
```c++
#include <iostream>

using namespace std;

int p1();

int main() {
  cout << "Project Euler, birinci problem: ";
  cout << p1() << endl;
  return 0;
}
```  
ve **prob1.cpp**  
```c++
#include <iostream>

bool bölünüyorMu(int sayı, int bölen) {
  return sayı % bölen == 0;
}

int p1() {
  int toplam{0};

  for (int sayı{3}; sayı < 1000; ++sayı) {
    if (bölünüyorMu(sayı, 3)) {
      toplam = toplam + sayı;
    }
    if (bölünüyorMu(sayı, 5)) {
      toplam += sayı;
    }
    if (bölünüyorMu(sayı, 15)) {
      toplam -= sayı;
    }
  }
  return toplam;
}
```
Derlemek ve link etmek için, terminalde c++ programını çalıştırdık:  
```shell
% c++ -std=c++23 ana.cpp prob1.cpp -o program
```
Sonra da yanıtı bulduk:
```shell
% program                                    
Project Euler, birinci problem: 233168
```

Ayrıca, bazı terminal komutlarını gördük: **pwd, ls, mkdir, cd**, vb. GitHub'daki bu sayfayı ve altındaki kodları kendi bilgisayarımıza indirmek için:  
```bash
% git clone https://github.com/bulent2k2/cpp_ogreniyoruz
% cd cpp_ogreniyoruz 
% cd e1
% ls
Makefile	e1b.cpp		e1da.cpp
e1a.cpp		e1c.cpp		e1db.cpp
% c++ e1a.cpp
% a.out
233168
% c++ -c e1a.cpp
% c++ -o prob1 e1a.o
prob1
233168
%
``` 

[Unix Terminal komutları hakkında daha ayrıntılı bilgi](https://acikders.ankara.edu.tr/pluginfile.php/155213/mod_resource/content/0/10.1.%20Linux%20Komutlar%C4%B1.pdf)  

Yukarıda **e1a.o** örneğinde gördüğümüz **object code** (nesne ya da makine kodu) hakkında konuştuk. Derleyicinin **-c** seçeneğini kullanarak birkaç örnek derledik ve sonra linker'la (**-c** kullanmadan) programı oluşturduk ve çalıştırdık.  

Gelecek hafta için üç ödevimiz var. Fırsat buldukça, yapabildiğimiz kadar yapalım:  
1) [Project Euler Hakkında](https://projecteuler.net/about) sayfasını istersek İngilizce ya da Türkçeye tercüme ettirip okuyuverelim ve kendimize bir oturum açalım. Sonra da birinci sorunun yanıtını girelim. Doğru yanıtı girince bize sunulan PDF dosyasını okuyalım.
1) Windows bilgisayarımıza cygwin terminal indirmek ve cygport paketiyle c++ derleyiciyi (ve arzu edersek Emacs editörünü) yüklemek. Linkler hemen aşağıda. Cygwin64 terminalini çalıştırın ve **pwd** komutunu girin. Size **/home/<kullanıcı-adı>** gibi bir çıktı verir. Bu **C:\cygwin64\home\<kullanıcı-adı>** diziniyle bir. Unix ve Windows arasındaki farklardan biri de bu. Yukarıda gördüğümüz **git** ve **c++** komutlarını da deneyin. Çalışmazsa Bülent hocaya danışıverin.
2) [Project Euler 15. Problem](https://projecteuler.net/problem=15) satranç tahtasında iki çapraz köşe arasındaki en kısa yolları nasıl sayabiliriz? 2x2 tahtada 6 yol var. Ya 3x3'te?

Windows'da Terminal, C++ Derleyici ve Editör
--
[Windows'a linux benzeri terminal ekle (cygwin)](https://cygwin.com/install.html) + 
[Cygwin'e c++ derleyici eklemek için cygport paketini indir](https://stackoverflow.com/questions/44354169/how-to-install-g-in-cygwin?newreg=f4dff0a25415471fa12f1dd8c109a3fe) +   
ilk program `deneme.cpp` diye bir dosya olsun: 
```bash
$ c++ deneme.cpp -o dene
$ ./dene
```
[Bir de emacs editor iyi olur](https://ftp.gnu.org/gnu/emacs/windows/emacs-29/emacs-29.4-installer.exe). Eski ama [özgür bir yazılım](https://www.gnu.org/software/emacs/). [Özgür yazılım vakfı](https://fsf.org) ve pekçok gönüllü tarafından geliştiriliyor ve destekleniyor.    
[Bu da modern VS Code editörü ve IDE'si](https://code.visualstudio.com/). Bunda yazıp bizim cygwin terminalinde derlemeyi ve çalıştırmayı deneyebilirsiniz.    
