#include "algs.h"

#define RED "\033[0;31m"
#define WHITE "\033[0;37m"
#define YELLOW "\033[0;33m"
#define GREEN "\033[0;32m"
#define CYAN "\033[0;36m"

void BubbleSort(std::vector<int> array){
    printf(CYAN);
    printf("BUBBLESORT: STABIL\nList = ");
    print(array,0,array.size(),array.size(),0);
    printf("\n");
    printf(WHITE);
    int OsszCsere = 0;
    int OsszHasonlit = 0;
    int counter = 1;
    for(int i = array.size()-1; i >= 1; i--){
        int csere = 0;
        int hasonlit = 0;
        for(int j = 0; j < i; j++){
            hasonlit++;
            if(array[j] > array[j+1]){
                csere++;
                swap(array[j], array[j+1]);
            }
        }
        OsszCsere += csere;
        OsszHasonlit += hasonlit;
        printf("Kulcs-osszehasonlitas:  %s%d%s | Csere: %s%d%s | %d. ",GREEN,hasonlit,WHITE,YELLOW,csere,WHITE,counter++);
        print(array,0,array.size(), i, 0);
        printf("\n");
    }
    printf("Osszes Kulcs-osszehasonlitas: %s%d%s | Osszes Csere: %s%d%s\n", GREEN, OsszHasonlit,WHITE, YELLOW, OsszCsere, WHITE);
}

void BubbleSortPlus(std::vector<int> array){
    printf(CYAN);
    printf("BUBBLESORT_PLUS: STABIL\nList = ");
    print(array,0,array.size(),array.size(),0);
    printf("\n");
    printf(WHITE);
    int OsszCsere = 0;
    int OsszHasonlit = 0;
    int counter = 1;
    int i = array.size()-1;
    while(i > 0){
        int u = 0;
        int csere = 0;
        int hasonlit = 0;
        for(int j = 0; j < i; j++){
            hasonlit++;
            if(array[j] > array[j+1]){
                csere++;
                swap(array[j], array[j+1]);
                u = j;
            }
        }
        i = u;
        OsszCsere += csere;
        OsszHasonlit += hasonlit;
        printf("Kulcs-osszehasonlitas:  %s%d%s | Csere: %s%d%s | %d. ",GREEN,hasonlit,WHITE,YELLOW,csere,WHITE,counter++);
        print(array,0,array.size(), i+1, 0);
        printf("\n");
    }
    printf("Osszes Kulcs-osszehasonlitas: %s%d%s | Osszes Csere: %s%d%s\n", GREEN, OsszHasonlit,WHITE, YELLOW, OsszCsere, WHITE);
}

void MaxSelectionSort(std::vector<int> array){
    printf(CYAN);
    printf("MaxSeletionSort: NEM_STABIL\nList = ");
    print(array,0,array.size(),array.size(),0);
    printf("\n");
    printf(WHITE);
    int OsszCsere = 0;
    int OsszHasonlit = 0;
    int counter = 1;
    for(int i = array.size()-1; i >= 1; i--){
        int ind = 0;
        int csere = 0;
        int hasonlit = 0;
        for(int j = 1; j <= i; j++){
            hasonlit++;
            if(array[j] > array[ind]){
                ind = j;
            }
        }
        csere++;
        OsszCsere += csere;
        OsszHasonlit += hasonlit;
        swap(array[i],array[ind]);
        printf("Kulcs-osszehasonlitas:  %s%d%s | Csere: %s%d%s | %d. ",GREEN,hasonlit,WHITE,YELLOW,csere,WHITE,counter++);
        print(array,0,array.size(), i, 0);
        printf("\n");
    }
    printf("Osszes Kulcs-osszehasonlitas: %s%d%s | Osszes Csere: %s%d%s\n", GREEN, OsszHasonlit,WHITE, YELLOW, OsszCsere, WHITE);
}

void MinSelectionSort(std::vector<int> array){
    printf(CYAN);
    printf("MinSeletionSort: STABIL\nList = ");
    print(array,0,array.size(),array.size(),0);
    printf("\n");
    printf(WHITE);
    int OsszCsere = 0;
    int OsszHasonlit = 0;
    int counter = 1;
    for(int i = 0; i < (signed)array.size()-1; i++){
        int ind = array.size()-1;
        int csere = 0;
        int hasonlit = 0;
        for(int j = array.size()-2; j >= i; j--){
            hasonlit++;
            if(array[j] < array[ind]){
                ind = j;
            }
        }
        csere++;
        OsszCsere += csere;
        OsszHasonlit += hasonlit;
        swap(array[ind], array[i]);
        printf("Kulcs-osszehasonlitas:  %s%d%s | Csere: %s%d%s | %d. ",GREEN,hasonlit,WHITE,YELLOW,csere,WHITE,counter++);
        print(array,0,array.size(), i, 1);
        printf("\n");
    }
    printf("Osszes Kulcs-osszehasonlitas: %s%d%s | Osszes Csere: %s%d%s\n", GREEN, OsszHasonlit,WHITE, YELLOW, OsszCsere, WHITE);
}

void NaiveInsertionSort(std::vector<int> array){
    printf(CYAN);
    printf("NaiveInsertionSort: STABIL\nList = ");
    print(array,0,array.size(),array.size(),0);
    printf("\n");
    printf(WHITE);
    printf("Kulcs-osszehasonlitas:  %s%d%s | Csere: %s%d%s | %d. ",GREEN,0,WHITE,YELLOW,0,WHITE,0);
    print(array,0,array.size(), 0, 1);
    printf("\n");
    int OsszCsere = 0;
    int OsszHasonlit = 0;
    int counter = 1;
    for(int i = 1; i < (signed)array.size(); i++){
        int j = i;
        int csere = 0;
        int hasonlit = 0;
        while(j > 0 && ++hasonlit && array[j-1] > array[j]){
            csere++;
            swap(array[j-1], array[j]);
            j--;
        }
        OsszCsere += csere;
        OsszHasonlit += hasonlit;
        printf("Kulcs-osszehasonlitas:  %s%d%s | Csere: %s%d%s | %d. ",GREEN,hasonlit,WHITE,YELLOW,csere,WHITE,counter++);
        print(array,0,array.size(), i, 1);
        printf("\n");
    }
    printf("Osszes Kulcs-osszehasonlitas: %s%d%s | Osszes Csere: %s%d%s\n", GREEN, OsszHasonlit,WHITE, YELLOW, OsszCsere, WHITE);
}

void InsertionSort(std::vector<int> array){
    printf(CYAN);
    printf("InsertionSort: STABIL\nList = ");
    print(array,0,array.size(),array.size(),0);
    printf("\n");
    printf(WHITE);
    printf("Kulcs-osszehasonlitas:  %s%d%s | Mozgatas: %s%d%s | %d. ",GREEN,0,WHITE,YELLOW,0,WHITE,0);
    print(array,0,array.size(), 0, 1);
    printf("\n");
    int OsszMozgatas = 0;
    int OsszHasonlit = 0;
    int counter = 1;
    for(int i = 1; i < (signed)array.size(); i++){
        int mozgatas = 0;
        int hasonlit = 0;
        if(++hasonlit && array[i-1] > array[i]){
            int x = array[i];
            mozgatas++;
            array[i] = array[i-1];
            mozgatas++;
            int j = i-2;
            while(j >= 0 && ++hasonlit && array[j] > x){
                array[j+1] = array[j];
                mozgatas++;
                j--;
            }
            array[j+1] = x;
            mozgatas++;
        }
        OsszMozgatas += mozgatas;
        OsszHasonlit += hasonlit;
        printf("Kulcs-osszehasonlitas:  %s%d%s | Mozgatas: %s%d%s | %d. ",GREEN,hasonlit,WHITE,YELLOW,mozgatas,WHITE,counter++);
        print(array,0,array.size(), i, 1);
        printf("\n");
    }
    printf("Osszes Kulcs-osszehasonlitas: %s%d%s | Osszes mozgatas: %s%d%s\n", GREEN, OsszHasonlit,WHITE, YELLOW, OsszMozgatas, WHITE);
}

int OsszMozgatas = 0;
int OsszHasonlit = 0;
int counter = 1;
int rek = 0;

void MergeSort(std::vector<int> array){
    OsszMozgatas = 0;
    OsszHasonlit = 0;
    counter = 1;
    rek = 0;
    printf(CYAN);
    printf("MergeSort: STABIL\nList = ");
    print(array,0,array.size(),array.size(),0);
    printf("\n");
    printf(WHITE);
    printf("------------------------------------------------------------------------------\n");
    printf("Mozgatas: Ez magaba foglalja a segedtombbe valo kimasoast, majd az osszefuttatasnal valo mozgatasokat!\n");
    printf("Prios szin: Adott resztombot jeloli ahol a rendezes zajlott\n");
    printf("------------------------------------------------------------------------------\n");
    ms(array, 0, array.size());
    std::cout << "ms: " << rek << std::endl;
}

void ms(std::vector<int>& array, int u, int v){
    rek++;
    if(u < v-1){
        int m = (u+v)/2;
        ms(array,u,m);
        ms(array,m,v);
        merge(array, u, m, v);
    }
}
void merge(std::vector<int>& array, int u, int m, int v){
    int mozgatas = 0;
    int hasonlit = 0;
    int d = m - u;
    std::vector<int> Z;
    Z.resize(d);
    for(int i = 0; i < d; i++){
        mozgatas++;           
        Z[i] = array[u+i]; 
    }
    int k = u;
    int j = 0;
    int i = m;
    while(i < v && j < d){
        hasonlit++;
        mozgatas++;
        if(array[i] < Z[j]){
            array[k] = array[i];
            i++;
        }
        else{
            array[k] = Z[j];
            j++;
        }
        k++;
    }
    while(j < d){
        mozgatas++;
        array[k] = Z[j];
        k++;
        j++;
    }
    OsszMozgatas += mozgatas;
    OsszHasonlit += hasonlit;
    printf("Kulcs-osszehasonlitas: %s%d%s | Mozgatas: %s%d%s | u:%d m:%d v:%d | %d. ",GREEN,hasonlit,WHITE,YELLOW,mozgatas,WHITE,u,m,v,counter++);
    print(array,u,v,0,2);
    printf("\n");
    if(u == 0 && v == (signed)array.size()){
        printf("Osszes Kulcs-osszehasonlitas: %s%d%s | Osszes mozgatas: %s%d%s\n", GREEN, OsszHasonlit,WHITE, YELLOW, OsszMozgatas, WHITE);
    }
}

int OH = 0;
int OC = 0;
int c = 1;

void QuickSort(std::vector<int> array, int sw){
    OH = 0;
    OC = 0;
    c = 1;
    printf(CYAN);
    printf("QuickSort: NEM_STABIL\nList = ");
    print(array,0,array.size(),array.size(),0);
    printf("\n");
    printf(WHITE);
    printf("------------------------------------------------------------------------------\n");
    printf("Hasonlitas: Ez magaba foglalja azt, amikor keressuk a pivot elemnel nagyobb szamot, hogy beallitsuk i erteket (elso while), es meg a fociklusban torteno osszehasonlitasokat is!\n");
    printf("Csere: CSAK amikor a csere fuggvenyt hivja meg, azt szamolja bele, amikor a vegen visszacsereljuk a pivotot az i-vel azt NEM!!\n");
    printf("PIROS: Az adott futasnal vizsgalt resztomb\n");
    printf("ZOLD: A rendezes utan a tengely elem (kvizben ez volt a +)\n");
    printf("------------------------------------------------------------------------------\n");

    QuickSort(array,0,array.size()-1, sw);

    printf("Osszes Kulcs-osszehasonlitas: %s%d%s | Osszes csere: %s%d%s\n", GREEN, OH,WHITE, YELLOW, OC, WHITE);
}

void QuickSort(std::vector<int>& array, int p, int r, int sw){
    if(p < r){
        int q = partition(array, p, r, sw);
        QuickSort(array,p,q-1,sw);
        QuickSort(array,q+1,r,sw);
    }
}

int partition(std::vector<int>& array, int p, int r, int sw){
    int csere = 0;
    int hasonlit = 0;

    srand(time(NULL));
    int i;
    switch (sw)
    {
    case 0:
        i = p;
        break;
    case 1:
        i = r;
        break;
    case 2:
        i = p +  std::rand() % ( r - p + 1 );
        break;
    default:
        break;
    }
    int x = array[i];
    array[i] = array[r];
    i = p;
    while(i < r && ++hasonlit && array[i] <= x){
        i++;
    }
    if(i < r){
        int j = i+1;
        while(j < r){
            ++hasonlit;
            if(array[j] < x){
                ++csere;
                swap(array[i],array[j]);
                i++;
            }
            j++;
        }
        array[r] = array[i];
        array[i] = x;
    }
    else{
        array[r] = x;
    }
    OC += csere;
    OH += hasonlit;
    printf("Kulcs-osszehasonlitas: %s%d%s | Csere: %s%d%s | p:%d r:%d | %d. ",GREEN,hasonlit,WHITE,YELLOW,csere,WHITE,p,r,c++);
    print(array,p,r+1,i,3);
    printf("\n");
    return i;
}


void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

void print(std::vector<int> array, int from, int to, int ind, int sw){
    
    switch (sw)
    {
    case 0:
        for(int i = from; i < ind; i++){
        printf("%d ", array[i]);
        }
        printf(RED);
        for(int i = ind; i < to; i++){
            printf("%d ", array[i]);
        }
        printf(WHITE);
        break;
    case 1:
        printf(RED);
        for(int i = from; i <= ind; i++){
            printf("%d ", array[i]);
        }
        printf(WHITE);
        for(int i = ind+1; i < to; i++){
            printf("%d ", array[i]);
        }
        break;
    case 2:
        for(int i = 0; i < (signed)array.size(); i++){
            if(i >= from && i < to){
                printf("%s%d%s ", RED, array[i], WHITE);
            }
            else{
                printf("%d ", array[i]);
            }
        }
        break;
    case 3:
        for(int i = 0; i < (signed)array.size(); i++){
            if(i == ind){
                printf("%s%d%s ", GREEN, array[i], WHITE);
            }
            else if(i >= from && i < to){
                printf("%s%d%s ", RED, array[i], WHITE);
            }
            else{
                printf("%d ", array[i]);
            }
        }
        break;
    default:
        break;
    }
}

void read(std::vector<int>& list){
    std::string elements;
    std::string elem;
    std::cin.ignore();
    std::cin.clear();
    std::getline(std::cin, elements);
    std::stringstream ss(elements);
    list.clear();
    while(ss >> elem){
        if(elem[elem.length()-1] == ','){
            elem = elem.substr(0,elem.length()-1);
            list.push_back(std::stoi(elem));
        }
        else{
            list.push_back(std::stoi(elem));
        }
    }
}