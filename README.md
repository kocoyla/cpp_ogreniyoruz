Fen Lisesinde C++ Öğreniyoruz
=============================

Çevirimiçi Derleyiciler
-----------------------
  [Sololearn](https://www.sololearn.com/en/compiler-playground/cpp)  `std::cin >> girdi;` çalışıyor!  

[OnlineGdb](https://onlinegdb.com/MOj93f6vtA)  Alttaki terminalde girdi ve çıktılar beraber.  

   [CoLiRu](https://coliru.stacked-crooked.com/a/9a5a244a826e572a).  Sağ alttaki **Edit** tuşuna basın.  

[Jupyter: Okuryazar Programlama](https://jupyter.org/try).  

[Jupyter + C++](https://mybinder.org/v2/gh/jupyter-xeus/xeus-cling/stable?filepath=notebooks/xcpp.ipynb).  


Çevirimiçi Dersler (Ücretsiz)
--
[Giriş dersleri](https://www.sololearn.com/en/learn/courses/c-plus-plus-introduction)  
[Orta seviye dersler](https://www.sololearn.com/en/learn/courses/c-plus-plus-intermediate)   
[Yapay beyinden öneriler](https://chatgpt.com/share/674775c0-d424-8009-835a-a1745715f8a7)  Ufak tefek hatalar var ama yine de çok faydalı bilgiler.  

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
```shell
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
1) [Project Euler Hakkında](https://projecteuler.net/about) sayfasını istersek İngilizce ya da Türkçeye tercüme ettirip okuyuverelim ve kendimize bir oturum açalım. Sonra da birinci sorunun yanıtını girelim. Doğru yanıtı girince bize sunular PDF dosyasını okuyalım.
1) Windows bilgisayarımıza cygwin terminal indirmek ve cygport paketiyle c++ derleyiciyi (ve arzu edersek Emacs editörünü) yüklemek. Linkler hemen aşağıda. Cygwin64 terminalini çalıştırın ve **pwd** komutunu girin. Size **/home/<kullanıcı-adı>** gibi bir çıktı verir. Bu **C:\cygwin64\home\<kullanıcı-adı>** diziniyle bir. Unix ve Windows arasındaki farklardan biri de bu. Yukarıda gördüğümüz **git** ve **c++** komutlarını da deneyin. Çalışmazsa Bülent hocaya danışıverin.
2) [Project Euler 15. Problem](https://projecteuler.net/problem=15) satranç tahtasında iki çapraz köşe arasındaki en kısa yolları nasıl sayabiliriz? 2x2 tahtada 6 yol var. Ya 3x3'te?

Windows'da Terminal, C++ Derleyici ve Editor
--
[Windows'a linux benzeri terminal ekle (cygwin)](https://cygwin.com/install.html) + 
[Cygwin'e c++ derleyici eklemek için cygport paketini indir](https://stackoverflow.com/questions/44354169/how-to-install-g-in-cygwin?newreg=f4dff0a25415471fa12f1dd8c109a3fe) +   
ilk program `deneme.cpp` diye bir dosya olsun: 
```bash
$ c++ deneme.cpp -o dene
$ ./dene
```
[Bir de emacs editor iyi olur](https://ftp.gnu.org/gnu/emacs/windows/emacs-29/emacs-29.4-installer.exe)

Literate (Okuryazar Programlama)
--
[Buradan başla](https://mybinder.org/v2/gh/jupyter-xeus/xeus-cling/stable?filepath=notebooks/xcpp.ipynb)  

[jupyter-xeus-cling](https://github.com/jupyter-xeus/xeus-cling/)  

[Kullanım kılavuzu](https://xeus-cling.readthedocs.io/)


```c++
#include <iostream>

int main() {
    std::cout << "Merhaba!\n\tHoşgeldin \n\tdaha kolay okunur, anlaşılır,\n\tokuryazar \n\tprogramlamaya...";
} 
main();
```

    Merhaba!
    	Hoşgeldin 
    	daha kolay okunur, anlaşılır,
    	okuryazar 
    	programlamaya...


## Usage

<div style="background: #efffed;
            border: 1px solid grey;
            margin: 8px 0 8px 0;
            text-align: center;
            padding: 8px; ">
    <i class="fa-play fa" 
       style="font-size: 40px;
              line-height: 40px;
              margin: 8px;
              color: #444;">
    </i>
    <div>
    To run the selected code cell, hit <pre style="background: #efffed">Shift + Enter</pre>
    </div>
</div>

## Output and error streams

`std::cout` and `std::cerr` are redirected to the notebook frontend.


```c++
#include <iostream>

std::cout << "some output" << std::endl;
```

    some output



```c++
std::cerr << "some error" << std::endl;
```


```c++
#include <stdexcept>
```


```c++
throw std::runtime_error("Unknown exception");
```

Omitting the `;` in the last statement of a cell results in an output being printed


```c++
int j = 5;
```


```c++
j
```

# Interpreting the C++ programming language

`cling` has a broad support of the features of C++. You can define functions, classes, templates, etc ...

## Functions


```c++
double sqr(double a)
{
    return a * a;
}
```


```c++
double a = 2.5;
double asqr = sqr(a);
asqr
```

## Classes


```c++
class Foo
{
public:

    virtual ~Foo() {}
    
    virtual void print(double value) const
    {
        std::cout << "Foo value = " << value << std::endl;
    }
};
```


```c++
Foo bar;
bar.print(1.2);
```

## Polymorphism


```c++
class Bar : public Foo
{
public:

    virtual ~Bar() {}
    
    virtual void print(double value) const
    {
        std::cout << "Bar value = " << 2 * value << std::endl;
    }
};
```


```c++
Foo* bar2 = new Bar;
bar2->print(1.2);
delete bar2;
```

## Templates


```c++
#include <typeinfo>

template <class T>
class FooT
{
public:
    
    explicit FooT(const T& t) : m_t(t) {}
    
    void print() const
    {
        std::cout << typeid(T).name() << " m_t = " << m_t << std::endl;
    }
    
private:
    
    T m_t;
};
```


```c++
FooT<double> foot(1.2);
foot.print();
```

## C++11 / C++14 / C++17 support


```c++
class Foo11
{
public:
    
    Foo11() { std::cout << "Foo11 default constructor" << std::endl; }
    Foo11(const Foo11&) { std::cout << "Foo11 copy constructor" << std::endl; }
    Foo11(Foo11&&) { std::cout << "Foo11 move constructor" << std::endl; }
};
```


```c++
Foo11 f1;
Foo11 f2(f1);
Foo11 f3(std::move(f1));
```


```c++
#include <vector>

std::vector<int> v = { 1, 2, 3};
auto iter = ++v.begin();
v
```


```c++
*iter
```

... and also lambda, universal references, `decltype`, etc ...

## Documentation and completion

 - Documentation for types of the standard library is retrieved on cppreference.com.
 - The quick-help feature can also be enabled for user-defined types and third-party libraries. More documentation on this feature is available at https://xeus-cling.readthedocs.io/en/latest/inline_help.html.



```c++
?std::vector
```

## Using the `display_data` mechanism

For a user-defined type `T`, the rich rendering in the notebook and JupyterLab can be enabled by by implementing the function `nl::json mime_bundle_repr(const T& im)`, which returns the JSON mime bundle for that type.

More documentation on the rich display system of Jupyter and Xeus-cling is available at https://xeus-cling.readthedocs.io/en/latest/rich_display.html

### Image example


```c++
#include <string>
#include <fstream>

#include "nlohmann/json.hpp"

#include "xtl/xbase64.hpp"

namespace nl = nlohmann;

namespace im
{
    struct image
    {   
        inline image(const std::string& filename)
        {
            std::ifstream fin(filename, std::ios::binary);   
            m_buffer << fin.rdbuf();
        }
        
        std::stringstream m_buffer;
    };
    
    nl::json mime_bundle_repr(const image& i)
    {
        auto bundle = nl::json::object();
        bundle["image/png"] = xtl::base64encode(i.m_buffer.str());
        return bundle;
    }
}
```


```c++
im::image marie("images/marie.png");
marie
```

### Audio example


```c++
#include <string>
#include <fstream>

#include "nlohmann/json.hpp"

#include "xtl/xbase64.hpp"

namespace nl = nlohmann;

namespace au
{
    struct audio
    {   
        inline audio(const std::string& filename)
        {
            std::ifstream fin(filename, std::ios::binary);   
            m_buffer << fin.rdbuf();
        }
        
        std::stringstream m_buffer;
    };
    
    nl::json mime_bundle_repr(const audio& a)
    {
        auto bundle = nl::json::object();
        bundle["text/html"] =
           std::string("<audio controls=\"controls\"><source src=\"data:audio/wav;base64,")
           + xtl::base64encode(a.m_buffer.str()) +
            "\" type=\"audio/wav\" /></audio>";
        return bundle;
    }
}
```


```c++
au::audio drums("audio/audio.wav");
drums
```

### Display


```c++
#include "xcpp/xdisplay.hpp"
```


```c++
xcpp::display(drums);
```

### Update-display


```c++
#include <string>
#include "xcpp/xdisplay.hpp"

#include "nlohmann/json.hpp"

namespace nl = nlohmann;

namespace ht
{
    struct html
    {   
        inline html(const std::string& content)
        {
            m_content = content;
        }
        std::string m_content;
    };

    nl::json mime_bundle_repr(const html& a)
    {
        auto bundle = nl::json::object();
        bundle["text/html"] = a.m_content;
        return bundle;
    }
}

// A blue rectangle
ht::html rect(R"(
<div style='
    width: 90px;
    height: 50px;
    line-height: 50px;
    background-color: blue;
    color: white;
    text-align: center;'>
Original
</div>)");
```


```c++
xcpp::display(rect, "some_display_id");
```


```c++
// Update the rectangle to be red
rect.m_content = R"(
<div style='
    width: 90px;
    height: 50px;
    line-height: 50px;
    background-color: red;
    color: white;
    text-align: center;'>
Updated
</div>)";

xcpp::display(rect, "some_display_id", true);
```

### Clear output


```c++
#include <chrono>
#include <iostream>
#include <thread>

#include "xcpp/xdisplay.hpp"
```


```c++
std::cout << "hello" << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(1));
xcpp::clear_output();  // will flicker when replacing "hello" with "goodbye"
std::this_thread::sleep_for(std::chrono::seconds(1));
std::cout << "goodbye" << std::endl;
```


```c++
std::cout << "hello" << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(1));
xcpp::clear_output(true);  // prevents flickering
std::this_thread::sleep_for(std::chrono::seconds(1));
std::cout << "goodbye" << std::endl;
```

## Magics

Magics are special commands for the kernel that are not part of the C++ language.

They are defined with the symbol `%` for a line magic and `%%` for a cell magic.

More documentation for magics is available at https://xeus-cling.readthedocs.io/en/latest/magics.html.


```c++
#include <algorithm>
#include <vector>
```


```c++
std::vector<double> to_shuffle = {1, 2, 3, 4};
```


```c++
%timeit std::random_shuffle(to_shuffle.begin(), to_shuffle.end());
```

[![xtensor](images/xtensor.png)](https://github.com/xtensor-stack/xtensor/)

- GitHub repository: https://github.com/xtensor-stack/xtensor/
- Online documentation: https://xtensor.readthedocs.io/
- NumPy to xtensor cheat sheet: http://xtensor.readthedocs.io/en/latest/numpy.html

`xtensor` is a C++ library for manipulating N-D arrays with an API very similar to that of numpy.


```c++
#include <iostream>

#include "xtensor/xarray.hpp"
#include "xtensor/xio.hpp"
#include "xtensor/xview.hpp"

xt::xarray<double> arr1
  {{1.0, 2.0, 3.0},
   {2.0, 5.0, 7.0},
   {2.0, 5.0, 7.0}};

xt::xarray<double> arr2
  {5.0, 6.0, 7.0};

xt::view(arr1, 1) + arr2
```

Together with the C++ Jupyter kernel, `xtensor` offers a similar experience as `NumPy` in the Python Jupyter kernel, including broadcasting and universal functions.


```c++
#include <iostream>
#include "xtensor/xarray.hpp"
#include "xtensor/xio.hpp"
```


```c++
xt::xarray<int> arr
  {1, 2, 3, 4, 5, 6, 7, 8, 9};

arr.reshape({3, 3});

std::cout << arr;
```


```c++
#include "xtensor-blas/xlinalg.hpp"
```


```c++
xt::xtensor<double, 2> m = {{1.5, 0.5}, {0.7, 1.0}};
std::cout << "Matrix rank: " << std::endl << xt::linalg::matrix_rank(m) << std::endl;
std::cout << "Matrix inverse: " << std::endl << xt::linalg::inv(m) << std::endl;
std::cout << "Eigen values: " << std::endl << xt::linalg::eigvals(m) << std::endl;
```


```c++
xt::xarray<double> arg1 = xt::arange<double>(9);
xt::xarray<double> arg2 = xt::arange<double>(18);

arg1.reshape({3, 3});
arg2.reshape({2, 3, 3});

std::cout << xt::linalg::dot(arg1, arg2) << std::endl;
```


```c++

```

