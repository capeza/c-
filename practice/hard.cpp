#include <iostream> 
#include <math.h> 
using namespace std; 

class figure {                            // абстрактный класс 
protected: 
   double x, y;                           // центр: x, y 
   double r;                              // масштаб фигуры 
public: 
   figure( double r ) { x = y = 0.0; this->r = r; } 
   // далее - 3 чистые (пустые) виртуальные функции:
   virtual const char *title( void ) = 0; 
   virtual double area( void ) = 0;      
   virtual double perimeter( void ) = 0; 
   void show( void ) { 
      cout << "фигура " << title() << ": площадь=" << area() 
           << ", периметр=" << perimeter() << endl; 
   }; 
};

class circle : public figure {            // класс всех кругов 
public: 
   circle( double r ) : figure( r ) {};  
   const char *title( void ) { return "круг"; }; 
   virtual double area( void ) { return M_PI * r * r; }; 
   virtual double perimeter( void ) { return 2. * M_PI * r; }; 
}; 
class square : public figure {            // класс всех квадратов 
public: 
   square( double r ) : figure( r ) {};  
   const char *title( void ) { return "квадрат"; }; 
   virtual double area( void ) { return r * r; }; 
   virtual double perimeter( void ) { return 4. * r; }; 
}; 
class triangle : public figure {          // класс всех равносторонних треугольников 
public: 
   triangle( double r ) : figure( r ) {};  
   const char *title( void ) { return "треугольник"; }; 
   virtual double area( void ) { return sqrt( 3. ) * r * r / 4.; }; 
   virtual double perimeter( void ) { return 3. * r; }; 
};
 
int main() { 
   figure *fgs[] = { new circle( 3 ), new square( 3 ), new triangle( 3 ) }; 
   int n = sizeof( fgs ) / sizeof( fgs[ 0 ] ); 
   for( int i = 0; i < n; i++ ) fgs[ i ]->show(); 
   for( int i = 0; i < n; i++ ) delete fgs[ i ]; 
   return 0; 
}