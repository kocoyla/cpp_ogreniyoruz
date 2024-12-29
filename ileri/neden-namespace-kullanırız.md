C++'da *ad alanları*, ya da *isim uzayları*, yazılımı mantıksal gruplar halinde düzenlemek için kullanılır. Özellikle, birden çok kitaplıkla çalışırken işlevler, sınıflar ve değişkenler gibi *tanımlayıcılar* için farklı kapsamlar oluşturarak ad çarpışmalarını önlemeye yarar. Bir başka deyişle, aynı yazılışı olan adların birbiriyle çakışmaması ve daha kolay anlaşılması için faydalıdır.

Örneğin:
``` 
namespace sayı {
    int kare(int x) {
        return x * x;
    }
}
namespace geo {
    struct kare {
        int x, y, kenar;
    };
} 
void deneme() {
    sayı::kare(9);
    geo::kare{3, 4, 5};
}
```
[Bütün kodu çalıştırın.] (https://onlinegdb.com/ua4tupWcv).  

Bir başka faydası da farklı çözümleri bir arada kodlamaya ve kolaylıkla denemeye yarar [Stack overflow soru/yanıt](https://stackoverflow.com/questions/4211827/why-and-how-should-i-use-namespaces-in-c).  

Referanslar 
----

[1](https://learn.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=msvc-170). Learn Microsoft.com.    
[2](https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-namespaces). Simplilearn.com.  
[3](https://en.cppreference.com/w/cpp/language/namespace). c++ referans.  
[4](https://www.geeksforgeeks.org/namespace-in-c/). GeeksForGeeks.  
[5](https://study.com/academy/lesson/using-namespaces-in-computing-definition-examples.html). Study.com.    
[6](https://www.geeksforgeeks.org/why-it-is-important-to-write-using-namespace-std-in-cpp-program/). GeeksForGeeks.   
[7](https://builtin.com/articles/using-namespace-std). builtin.com.  
