Yedinci ders
====

[Görsel kayıt](https://drive.google.com/file/d/1n6_-fDBSnLnbIM4GPM2d7P7gvJbVevqj) 1:39:32. 

Geçen hafta yazıdığımız asal çarpan ve fibonaççi kodlarını gözden geçirdik. 
Birkaç düzeltme yaptık. Fibonaççi koduna bellek ekleyerek hızlandırdık.  

[Asal çarpanları özyineleyerek bulma](https://www.onlinegdb.com/iim7dEsNE)  

[Bellekle hızlandırılmış Fibonaççi](https://onlinegdb.com/XpOcEU6jD)
[Bu da sayı sınırının farkında Fibonaççi kodu](https://www.onlinegdb.com/9zcoMg7HN))  

[Aralık, Konum ve Dörtgen türleri](https://onlinegdb.com/hyYDFxHpz)   
Anahtar sözcükler: `struct`, `class`, `const.` Ayrıca kullanmamıza pek gerek kalmayan `public` ve `private` da var.
Varolan türleri bir araya getirerek yeni türler oluşturduk. Örneğin: 
```
// nokta
struct konum{
    int x{0},y{0};
};
```

Nokta işlemcisini kullandık:
```
konum nokta1{3, 4}; // x=3, y=4 noktası
nokta1.x += 2;      // iki birim kaydıralım sağa doğru
cout << nokta1.x << " " << nokta1.y << endl;
```
Daha genel olarak:
```
tür nesne(girdi1); // yapıcı yöntem
oku = nesne.veri; // nesneye özel ama gizli (private) olmayan verileri kullanmak için
nesne.veri = yaz; // nesneye özel verileri değiştirmek için
çıktı = nesne.yöntem(girdi2); // nesneye özel yöntemleri çağırmak
```

[Özgür dizi/özgür bellek](https://www.onlinegdb.com/K0bjhI0l_). Bir arkadaşınızın güzel sorusu. 
Anahtar sözcükler: `new` ve `delete`


