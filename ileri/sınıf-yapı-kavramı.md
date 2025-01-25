C++'da sınıf (`class`), nesne yönelimli programlamanın temel yapı taşlarından biridir. Sınıfları, gerçek hayattan bir örnek üzerinden anlatmaya çalışalım.

Diyelim ki bir "Araba" sınıfı oluşturalım:

```cpp
class Araba {
private:
    // Kapsama (Encapsulation) örneği: Bu özelliklere dışarıdan doğrudan erişilemez
    string marka;
    string model;
    int hız;

public:
    // Sınıfın yapıcı metodu
    Araba(string _marka, string _model) {
        marka = _marka;
        model = _model;
        hız = 0;
    }

    // Soyutlama (Abstraction) örneği: Karmaşık işlemler basit yöntemlerle gizlenir
    void hızlan() {
        if (hız < 180) {
            hız += 10;
            cout << "Araba hızlandı. Şu anki hız: " << hız << " km/s" << endl;
        }
    }

    void yavaşla() {
        if (hız > 0) {
            hız -= 10;
            cout << "Araba yavaşladı. Şu anki hız: " << hız << " km/s" << endl;
        }
    }

    // Bilgi alma metodları
    string markaModel() {
        return marka + " " + model;
    }
};
```

Kalıtım (Inheritance) örneği için ise:

```cpp
// Temel Araba sınıfından türeyen Spor Araba sınıfı
class SporAraba : public Araba {
private:
    int motorGücü;

public:
    SporAraba(string _marka, string _model, int _motorGücü) 
        : Araba(_marka, _model) {
        motorGücü = _motorGücü;
    }

    void hızlıGit() {
        // Ana sınıftan gelen özellikleri kullanarak yeni bir yöntem 
        for(int i = 0; i < 5; i++) {
            hızlan();
        }
    }
};
```

Bu örnekte:

1. **Kapsama (Encapsulation)**: Araba'nın iç özellikleri (`marka`, `model`, `hız`) `private` olarak tanımlanmış. Bunlara doğrudan erişilemiyor, sadece sınıfın yöntemleri (metod da denir) aracılığıyla kontrollü bir şekilde değiştirilebiliyor.

2. **Soyutlama (Abstraction)**: `hızlan()` ve `yavasla()` yöntemleri, hız değişiminin karmaşık mantığını basit, anlaşılır metodlarla gizliyor. Kullanıcı detayları bilmeden bu yöntemleri kullanabilir.

3. **Kalıtım (Inheritance)**: `SporAraba` sınıfı, `Araba` sınıfından tüm özellikleri ve metodları miras alıyor. Üstelik kendi özel yöntemini (`hızlıGit()`) de ekleyebiliyor.

Kullanım örneği:

```cpp
int main() {
    SporAraba bmw("BMW", "M3", 450);
    
    bmw.hızlıGit();  // Hızlanma metodunu çağırır
    cout << bmw.markaModel() << endl;  // Marka ve modeli yazdırır

    return 0;
}
``` 

[Kodun hepsini onlinegdb.com'da çalıştırmak için buraya tıklayabilirsiniz](https://onlinegdb.com/dbFycFP09).  


Bu yaklaşımlar, yazılımların:
- Daha düzenli,
- Güvenli,
- Tekrar kullanılabilir ve
- Bakım ve değişiklik yapması daha kolay olmasına yardımcı olur.  

Ayrıca, sınıflar, ve genelde yeni türler, karmaşık sistemleri küçük, yönetilebilir parçalara ayırarak programlarımızı daha anlaşılır kılar.

Notlar:  
1) Bu örnekte arabayı yeni bir tür olarak da düşünebiliriz. Her sınıf ya da yapı (`struct`) yeni bir tür oluşturarak yazılıma gereken karmaşık nesneleri düzenler ve anlaşılır kılar.  

2) `class` ve `struct` anahtar sözcüklerinin tek farkı içindeki verilerin gizli ya da görünür olması. Şu erişim belirleyicilerle (access specifier) kendimiz düzenlemeler yapabiliriz: `public` (görünür), `private` (gizli) ve `protected` (korunur).

3) Kapsama kavramı **bileşim (composition)** kavramıyla yakından ilişkili. Örneğimizde `Araba` türünü, marka,model ve hız bilgilerinin bir bileşkesi olarak tanımladık. `SporAraba` da bir tür araba, ama onun bileşiminde bir de motorGücü var. 

Altıncı dersimizde gördüğümüz `Kişi` türünü ad, soyad, yaş ve telefon bilgilerinin bileşkesi olarak tanımladık. 
[Kişi türü](https://www.sololearn.com/en/compiler-playground/cVc74iqt2Ul0).  

Yedinci dersimizde `dörtgen` türü, en, boy ve konum bilgilerinin bileşkesiydi. `konum` türünü x ve y sayılarıyla tanımladık. Yani konum da x ve y koordinatlarının bileşkesi olarak düşünülebilir. Ayrıca `dörtgen`, `aralık` türünü kullandı. O da  bir ikili bileşke: a ve b sayıları. Aynı `konum` gibi bir ikili ama verdiğimiz anlamlar farklı.  [dörtgen, konum, aralık türleri](https://www.onlinegdb.com/3fk-Akokh).  

4) Programlama sanatını ve mühendisliğini güzel ve uyumlu çalışan çeşitli türlere ait bireylerinin yaşadığı bir sanal evreni tasarlamak, yaratmak ve çalıştırmak olarak düşünebiliriz.