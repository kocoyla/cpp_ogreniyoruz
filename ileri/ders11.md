[Görsel kayıt burada](https://drive.google.com/file/d/1Ls8NcHeju8L_yrY0eDc9ZUUdb_Faqyzr/view). 1 saat 24 dakika uzunluğunda.  

Derste beraber yazdığımız yeni `Temel` adlı türün (`class`) [kodu burada]( https://www.onlinegdb.com/IO4hMr9R-).  

Yeni türümüzün nesnelerini yapan ve yıkan yöntemler üzerinde durduk. Nasıl tanımlanırlar ve nasıl çalışırlar, deneyerek gördük. Birden fazla yapıcı olabileceğini ama sadece tek bir yıkıcı olduğunu öğrendik. Sonra kopyalayarak yapan bir yöntem oluşturduk. Adını *kopyalayıcı koyduk*. Bunların hiçbirinin çıktısı yok. Onun için ilk yazımları (*declaration*) şöyle oluyor:
```c++ 
class Temel { 
    Temel(...); // girdi olabilir
    ~Temel(); // girdi yok! 
    Temel(const Temel&); // aynı türden tek girdi zorunlu
};
```
