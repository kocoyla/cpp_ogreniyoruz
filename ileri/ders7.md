Yedinci ders
====

[Görsel kayıt](https://drive.google.com/file/d/1n6_-fDBSnLnbIM4GPM2d7P7gvJbVevqj) 1:39:32. 

Geçen hafta yazıdığımız asal çarpan ve fibonaççi kodlarını gözden geçirdik. 
Asal çarpan bulan döngüde düzeltme yaptık. Fibonaççi koduna bellek ekleyerek hızlandırdık.
Sonra da yeni tür tanımlamaya daha derin bir giriş yaptık, bir kaç örnek gördük.

Asal çarpanlar
---- 

Döngümüz bazı çarpanları bulmuyordu. Onu düzelttik. Bir de derste görmedik ama 
döngü yerine özyineleme yöntemiyle de bulabiliriz asal çarpanları. Örneğin:  

[Asal çarpanları özyineleyerek bulalım](https://www.onlinegdb.com/iim7dEsNE)  
Hem `namespace` örneği hem de `<list>` dosyasından `std::list` adlı dizi türü kullanımına dikkat..

Fibonaççi
----

Geçen derste bu özyineleme kodunda iki terim (`fib(n-1) + fib(n-2)`) olduğu için 
çatallanma ve ikiye katlanma olduğunu konuşmuştuk. Onun için büyük sayıları hesaplamak 
çok zaman alabiliyor. Hızlandırmak için bellek ekledik.

[Bellekle hızlandırılmış Fibonaççi](https://onlinegdb.com/XpOcEU6jD)
[Bu da sayı sınırının farkında Fibonaççi kodu](https://www.onlinegdb.com/9zcoMg7HN))  

Yeni türler
----

[Aralık, Konum ve Dörtgen türleri](https://onlinegdb.com/hyYDFxHpz)   
Yeni anahtar sözcükler: `struct`, `class`, `const.` Ayrıca kullanmamıza
pek gerek kalmayan `public` ve `private` da var. Varolan türleri bir araya 
getirerek yeni türler oluşturduk. Örneğin: 
```
// nokta
struct konum{
    int x{0},y{0};
};
```

Nokta (`.`) işlemcisini gördük:
```
konum k1{3, 4}; // x=3, y=4 koordinatları
k1.x += 2;      // sağa doğru iki birim kaydıralım
cout << k1.x << " " << k1.y << endl;
```
Daha genel olarak:
```
tür nesne(girdi1); // yapıcı yöntemle yeni bir nesne/değişken tanımladık
oku = nesne.veri; // nesneye özel verileri kullanabiliriz
nesne.veri = yaz; // nesneye özel verileri değiştirebiliriz
çıktı = nesne.yöntem(girdi2); // nesneye özel yöntemleri çağırabiliriz
```

Özgür bellek/özgür dizi
----

[Özgür dizi/özgür bellek](https://www.onlinegdb.com/K0bjhI0l_). Ders sırasında bir arkadaşınız güzel bir soru sordu. Bir fonksiyon içinde oluşturduğumuz bir diziyi o fonksiyonun dışında kullanmak mümkün mü? Hem de kopyalamadan, aynı adresten. Burada bir örnek görelim. `new` ve `delete` anahtar sözcüklerini kullanıyor. Ama modern derleyiciler sayesinde (c++20 ve sonrası) daha akıllı ve becerikli yöntemler de var. Ayrıca donanımlar artık yeterince hızlı. Onun için fonksiyonların girdi ve çıktılarının kopyalanmasında da çok sakınca yok. Bunu bir örneği yukarıdaki özyineleyen asal çarpan kodu. Kullandığımız dizi (`std::list<Sayı>`) hem girdi hem de çıktı olarak bol bol kopyalanıyor. Ayrıca  gelişmiş modern derleyiciler kopyalamak yerine çok daha hızlı olan bir taşıma yöntemi de kullanabiliyorlar. Bu derste kısaca gördüğümüz yapıcı (constuctor) ve bahsettiğimiz yıkıcı (destructor) yöntemler yanında eşitleme, kopya ve taşıma yapıcıları (assignment constructor, copy constructor, move constructor) da var. Sırası geldikçe önümüzdeki derslerde göreceğiz.


