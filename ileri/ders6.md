Altıncı Dersimiz
===
Geçen hafta Project Euler'in ilk sorusunu çözmüştük beraber. Bu derste de iki soruyu daha çözdük. 

[PE 2](https://projecteuler.net/problem=2): Fibonaççi serisi.  
[PE 3](https://projecteuler.net/problem=3): Asal çarpanlar. 

Çözümler aşağıda.  

Ayrıca [PE 15](https://projecteuler.net/problem=15)'e de giriş yaptik. Satranç tahtasının çizgileri üzerinde en kısa yolları bulmak ve saymak hakkında birkaç ipucu verdik. Sol üst köşeden sağ alt köşeye giden yolları bulmak istiyoruz.  

İpucu 1) 1x1'lik tahtada sadece iki yol var: sağa git, sonra aşağıya git. Ya da önce aşağıya git sonra sağa git. 2x2lik tahtada 6 yol var. Bunları 1x1lik çözümü kullanara nasıl bulabiliriz?  

İpucu 2) PE 2'de gördüğümüz özyineleme (recursion) yöntemi çok faydalı olacak. Ama 10x10'a kadar deneyin. Sonra çok yavaşlar ve hatta belleğe sığmayabilir!   

İpucu 3) Küçük tahtadaki çözümü iki boyutlu bir diziyle belleğe yazarsak tekrar tekrar özyinelemeye ve hesaplamaya gerek kalmaz.  

Biraz düşünün, biraz kod yazın, gelecek hafta beraber çözelim. Çok sade ve güzel bir çözümü var.  

En sonda da kendi türlerimizi tanımlamaya hızlı bir giriş yaptık. Şu ana kadar hep temel türler (örneğin bool, int, double, char) ve standart kütüpten türler (örneğin std::string, std::vector, vb) görmüş ve kullanmıştık sadece. Kişi diye bir tür olsun. Telefon diye bir tür olsun. Dikdörtgen diye bir tür olsun. Bunları gelecek hafta görmeye başlayalım.    


Beraber yazdığımız kodlar
====  
[Fibonaççi ve özyineleme]( 
https://www.onlinegdb.com/3BkmN8ubE)   

[PE 2 çözümü]( 
https://www.onlinegdb.com/NPW4wUzoH)  

[PE 3 çözümü](  
https://www.onlinegdb.com/Yiqp2YvUo)  

[Yeni türlere giriş (İngilizce'si user type)](  
https://sololearn.com/compiler-playground/cVc74iqt2Ul0)  

Yukarıdaki yeni türlere giriş kodunun en başında temel sayı türleriyle ilgili küçük bir soru var. Onu da yanıtlamaya çalışın.  

Bir de c++ temel türlerle kolaylıkla hesaplayabileceğimiz en büyük doğal sayının şu olduğunu bulun:  
    18446744073709551615.  
Türü: `unsigned long`. 
Okuması daha kolay olsun diye virgüllerle yazalım:  
    18,446,744,073,709,551,615.  
Yani 18 milyar kere milyardan fazla.  
Yani 1.8e19'dan fazla ama 1.8e20'den az.  
Doğru mu?  
Yanıtı için biraz düşündükten sonra şuna bakın:
[Sayısal Sınırlar](https://onlinegdb.com/MMtBYyiXQ).
