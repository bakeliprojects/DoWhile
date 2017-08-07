#include <iostream>

using namespace std;

int main()
{
     int nbEnfants(0);
     do
        {
            cout << "Combien d'enfants avez-vous ?" << endl;
     cin >> nbEnfants;
       }
     while (nbEnfants < 0);
     cout << "Merci d'avoir indique un nombre d'enfants correct. Vous en avez " << nbEnfants << endl;
      return 0;
      }
