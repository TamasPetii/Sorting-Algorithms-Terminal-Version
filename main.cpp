#include "algs.h"
/*
1. BubbleSort
2. BubbleSortPlus
3. MaxSelectionSort
4. MinSelectionSort
5. NaiveInsertionSort
6. InsertionSort
7. MergeSort
8. QuickSort //0 = Első elem MINDIG a pivot  | 1 = Utolso elem MINDIG a pivot | 2 = random elem a pivot
*/
int main(int argc, char** argv){
    std::vector<int> list;
    if(argc > 1){
        for(int i = 1; i < argc; i++){
            list.push_back(std::stoi(argv[i]));
        }
    }
    int option;
    do{
        std::cout << "-------------------------\n"
                  << "0. Add new List\t\t|\n"
                  << "1. BubbleSort\t\t|\n"
                  << "2. BubbleSortPlus\t|\n"
                  << "3. MaxSelectionSort\t|\n"
                  << "4. MinSelectionSort\t|\n"
                  << "5. NaiveInsertionSort\t|\n"
                  << "6. InsertionSort\t|\n"
                  << "7. MergeSort\t\t|\n"
                  << "8. QuickSort\t\t|\n"
                  << "9. EXIT\t\t\t|\n"
                  << "-------------------------\n"
                  << "Opcio: ";
        std::cin >> option;
        system("cls");
        //system("clear"); //Linux!
        switch (option)
        {
        case 0:
            std::cout << "Lista: ";
            read(list);
            break;
        case 1:
            BubbleSort(list);
            break;
        case 2:
            BubbleSortPlus(list);
            break;
        case 3:
            MaxSelectionSort(list);
            break;
        case 4:
            MinSelectionSort(list);
            break;
        case 5:
            NaiveInsertionSort(list);
            break;
        case 6:
            InsertionSort(list);
            break;
        case 7:
            MergeSort(list);
            break;
        case 8:
            std::cout << "Add meg mit valasszon PIVOT elemnek!\n"
                      << "0 - Elso elemet MINDIG!\n"
                      << "1 - Utolso elemet MINDIG!\n"
                      << "2 - Random elemet\n";
            int o;
            std::cin >> o;
            switch (o)
            {
            case 0:
                QuickSort(list, 0);
                break;
            case 1:
                QuickSort(list, 1);
                break;
            case 2:
                QuickSort(list, 2);
                break;
            default:
                std::cout << "Rossz opcio!";
                exit(1);
                break;
            } 
            break;
        case 9:
            std::cout << "Szevasz Tavasz\n";
            break;
        default:
            printf("Rossz valasztas!");
            exit(1);
            break;
        }
    }while(option < 9);

}