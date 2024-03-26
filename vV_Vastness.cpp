#include "Being.hpp"
#include "thought.hpp"

int main()
{
    being ktos("Michael");
    
    thought mysl1;
    //thought mysl2;
    //thought mysl3;

   //mysl1.getDate();
   //mysl2.getDescr();
   //mysl3.getReason();

    ktos += mysl1;
    //ktos += mysl2;
    //ktos += mysl3;

    ktos.getDigitalPortrait();
}
