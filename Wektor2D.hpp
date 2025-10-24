    public:
        Wektor2D() //konstruktor
        {
            x=0; 
            y=0; 
            cout << "współrzędne wektora: " << "x = " << x << " y = " << y << endl;
        } 

        Wektor2D(double a, double b) 
        {
            x=a; 
            y=b; 
            cout << "współrzędne wektora: " << "x = " << x << " y = " << y << endl;
        }; 

        ~Wektor2D() //destruktor
        {
            cout << "Zniszczenie" << endl;
@@ -62,4 +60,3 @@
    scalar =v1.getX()*v2.getX()+ v1.getY()*v2.getY(); 
    return scalar;
