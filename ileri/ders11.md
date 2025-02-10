[Görsel kayıt burada](https://drive.google.com/file/d/1Ls8NcHeju8L_yrY0eDc9ZUUdb_Faqyzr/view). 1 saat 24 dakika uzunluğunda.  

Derste beraber yazdığımız yeni `Temel` adlı türün (`class`) [kodu burada]( https://www.onlinegdb.com/IO4hMr9R-). Epey çıktısı var, hatta en başta derleyici bir uyarı veriyor. Biraz düzeltmeler yapılmış hali de [burada]( https://onlinegdb.com/8h299NKAP). Uyarıyı ve `cout` yerine `dout` nesnesi kullanarak çıktıyı temizliyor. Bir de en başta Gürkan kardeşimizin rica ettiği *eşlem* (`std::map`) için de ufak bir örnek var.  

Yeni türümüzün nesnelerini yapan ve yıkan yöntemler üzerinde durduk. Nasıl tanımlanırlar ve nasıl çalışırlar, deneyerek gördük. Birden fazla yapıcı olabileceğini ama sadece tek bir yıkıcı olduğunu öğrendik. Sonra kopyalayarak yapan bir yöntem oluşturduk. Bu kopyalayarak yapan yapıcının adını *kopyalayıcı* koyduk. Bunların hiçbirinin çıktısı yok ve olamaz. Tek sorumlulukları, yeni nesne için bellekte yer açmak ve ilk değerini yazmak, ve ömrünün sonuna gelince de onu bellekten silmek. Onun için ilk yazımları (*declaration*) şöyle oluyor:
```c++ 
class Temel { 
private: 
    int gizli;
protected: 
    int korunmuş;
public:
    Temel(...); // girdi olabilir
    ~Temel(); // girdi yok! 
    Temel(const Temel&); // aynı türden tek girdi zorunlu
};
```
