#ifndef PORT_H
#define PORT_H

#include <iostream>

class Port {
private:
    char* brand;
    char style[20]; // e.g. tawny, ruby, vintage
    int bottles;

public:
    Port(const char* br = "none", const char* st = "none", int b = 0);
    Port(const Port& p);
    virtual ~Port() { delete [] brand; }

    Port& operator= (const Port & p);
    Port& operator+= (int b) ; // adds b to bottles
    Port& operator-= (int b); // subtracts b from bottles, if possible

    int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend std::ostream& operator<< (std::ostream& os, const Port& p);
};

#endif // PORT_H


/*
Styles:
white, rose, ruby, tawny, vintage, crusted

Brands:
Fonseca Crusted Port, 2006, 20%: £23.95 for 75cl, Amazon 
Ramos Pinto RP20 20 Year Old Tawny Port, 20.5%: £52.38 for 75cl, Amazon
Graham’s Fine White Port Wine, 19%: £12.45 for 75cl, Amazon
Warre’s Otima 10-Year Old Tawny, 20%: £15.49 for 50cl, The Drink Shop
Kopke 30 Years Old White, 20%: £74.99 for 37.5cl, Amazon 
Taylor’s Late Bottled Vintage 2012, 20%: £10 for 75cl, Amazon
Krohn Colheita 2004, 20%: £24.01 for 75cl, Uvinum
Waitrose Late-Bottled Vintage Port, Symington Family Estates, 20%: £10.99 for 75cl, Waitrose Cellar

Taylor’s Vintage Port 1985
Warre’s Vintage Port 2000
Quinta Do Noval Nacional Vintage Port 1985
Graham’s Vintage Port 2003
Fonseca Guimaraens 1998
Niepoort Colheita Port 1995
Dow Vintage Port 1975
Quinta de la Rosa Vintage Port 2003
Smith Woodhouse Vintage Port 1985
Sandeman Vintage Port 2000

Taylor Fladgate
Quinta do Noval
Graham’s
Dow’s 40-year-old Port
Fonesca’s bin #27

TAYLOR FLADGATE 10 YEAR OLD TAWNY PORT
FONSECA BIN 27 RUBY PORT
FONSECA SIROCO WHITE PORT
CROFT PINK ROSÈ PORT
CROFT FINE TAWNY PORT


*/