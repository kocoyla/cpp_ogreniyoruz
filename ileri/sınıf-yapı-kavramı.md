C++'da sınıf (`class`), nesne yönelimli programlamanın temel yapı taşlarından biridir. Sınıfları, gerçek hayattan bir örnek üzerinden anlatmaya çalışalım.

Diyelim ki bir "Araba" sınıfı oluşturalım:

```cpp
class Araba {
private:
    // Kapsama (Encapsulation) örneği: Bu özellikler dışarıdan doğrudan erişilemez
    string marka;
    string model;
    int hiz;

public:
    // Sınıfın yapıcı metodu
    Araba(string _marka, string _model) {
        marka = _marka;
        model = _model;
        hiz = 0;
    }

    // Soyutlama (Abstraction) örneği: Karmaşık işlemler basit metodlarla gizlenir
    void hizlan() {
        if (hiz < 180) {
            hiz += 10;
            cout << "Araba hızlandı. Şu anki hız: " << hiz << " km/s" << endl;
        }
    }

    void yavasla() {
        if (hiz > 0) {
            hiz -= 10;
            cout << "Araba yavaşladı. Şu anki hız: " << hiz << " km/s" << endl;
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
    int motorGucu;

public:
    SporAraba(string _marka, string _model, int _motorGucu) 
        : Araba(_marka, _model) {
        motorGucu = _motorGucu;
    }

    void hizliGit() {
        // Ana sınıftan gelen özellikleri kullanarak yeni bir yöntem 
        for(int i = 0; i < 5; i++) {
            hizlan();
        }
    }
};
```

Bu örnekte:

1. **Kapsama (Encapsulation)**: Araba'nın iç özellikleri (`marka`, `model`, `hiz`) `private` olarak tanımlanmış. Bunlara doğrudan erişilemiyor, sadece sınıfın yöntemleri (metod da denir) aracılığıyla kontrollü bir şekilde değiştirilebiliyor.

2. **Soyutlama (Abstraction)**: `hizlan()` ve `yavasla()` yöntemleri, hız değişiminin karmaşık mantığını basit, anlaşılır metodlarla gizliyor. Kullanıcı detayları bilmeden bu yöntemleri kullanabilir.

3. **Kalıtım (Inheritance)**: `SporAraba` sınıfı, `Araba` sınıfından tüm özellikleri ve metodları miras alıyor. Üstelik kendi özel yöntemini (`hizliGit()`) de ekleyebiliyor.

Kullanım örneği:

```cpp
int main() {
    SporAraba bmw("BMW", "M3", 450);
    
    bmw.hizliGit();  // Hızlanma metodunu çağırır
    cout << bmw.markaModel() << endl;  // Marka ve modeli yazdırır

    return 0;
}
```

Bu yaklaşımlar, kodun:
- Daha düzenli
- Güvenli
- Tekrar kullanılabilir
- Bakım ve değişiklik yapmayı kolaylaştırır.

Sınıflar, karmaşık sistemleri küçük, yönetilebilir parçalara ayırarak programlarımızı daha anlaşılır kılar.

Notlar:  
1) Bu örnekte arabayı yeni bir tür olarak da düşünebiliriz. Her sınıf ya da yapı (`struct`) yeni bir tür oluşturarak yazılıma gereken karmaşık nesneleri daha düzenli ve anlaşılır kılar.  

2) `class` ve `struct` anahtar sözcüklerinin tek farkı içindeki verilerin gizli ya da görünür olması. Şu erişim belirleyicilerle (access specifier) kendimiz düzenlemeler yapabiliriz: `public` (görünür), `private` (gizli) ve `protected` (korunur).

3) ...
