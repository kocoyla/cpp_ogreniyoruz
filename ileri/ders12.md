[Görsel kayıt burada]( https://drive.google.com/file/d/1vbOHdEOnAxqS53GEToBmgoPkyUs_0Lyo). 1 saat 24 dakika.  

Hızlıca [on birinci ders](ders11.md) notlarına baktım. `public, protected, private, operator, friend` anahtar sözcüklerinin, yapıcı ve yıkıcı yöntemlerin üzerinden geçtik. Bilhassa `operator=, operator<< ve operator>>' ile işlemcilere yeni beceriler kazandırmanın faydasını gördük.  

Pekiştirmek için dizilerden farklı davranan ama çok faydalı veri yapılarından biri olan **eşlem** kalıbına yani `std::map<Tür1, Tür2>` için yeni örnekler verdik. [Kodu burada](https://www.onlinegdb.com/57Qmx1v00). Arkadaşlarınız güzel sorular sordular ve güzel gözlemler yaptılar. Bilhassa `std::vector<Tür>` kalıbıyla karşılaştırmak öğretici oldu. **Anahtar** da denilen Tür1 değerlerinin kendiliğinden sıralandığını gözledik. Eşlemleri daha genel bir küme olarak düşünürsek, üyelerinin birer çift yani `std::pair<Tür1, Tür2>` olduğunu gördük. Derste görmediğimiz bir bağlantı daha kuralım: Daha önce kısaca gördüğümüz `std::set<Tür>` yani matematiksel kümelere çok benzeyen *küme* kalıbını anımsayalım. Eşlemleri kümelerin genellemesi olarak görebiliriz. Küme gereken her yerde kullanılabiliriz eşlemleri. Örneğin bir sayı kümemiz olsun: 
```c++ 
set<int> küme {1, 4, 6, 8, 9, 10, 12};
``` 
Buna eşdeğer bir eşlem şu olur: 
```c++ 
map<int, int> eşlem {
  {1, 1}, {4, 3}, {6, 4}, {8, 4},
  {9, 3}, {10, 4}, {12, 6}
};
```
Sanırım Tür2 değerlerinin ne anlama geldiğini tahmin etmişsinizdir. Hatta, daha da açık olsun istersek daha da ilginç bir örnek yazabiliriz:
```c++ 
map<int, set<int>> eşlem2 {

};
```
