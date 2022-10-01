#include <stdio.h>
int main()
{

    printf("___________________________________________________\n");
    printf("Welcome to Burhan's Vending Machine.\n\n");
choose_again:
    printf("Our Products:\n");
    printf("Product Code > Products>\t\tPrice(RS.)\n");
    printf("___________________________________________________\n");
    printf("1____________> Pepsi                    Rs.50/-\n");
    printf("2____________> Lay's (Salt)             Rs.100/-\n");
    printf("3____________> Kurkure (Masala Munch)   Rs.100/-\n");
    printf("4____________> Fanta                    Rs.50/-\n");
    printf("5____________> Coca-Cola                Rs.50/-\n");
    printf("6____________> Mirinda                  Rs.50/-\n\n");
    printf("Enter the product code of the product to contunue.\n");
    int Product_Code;
    int input_cash;
    int try_again;
    scanf("%d", &Product_Code);
    switch (Product_Code)
    {
    case 1:
    try_again_pepsi:
        printf("Enter the cash price of Pepsi.\n");
        scanf("%d", &input_cash);
        switch (input_cash)
        {
        case 50:
            printf("Transaction Successful!\nHere is you Drink.");
            goto exit;
            break;
        default:
            printf("Transaction Unsuccessful!\nInsufficient ballence.\n");
        try_again2_pepsi:
            printf("Enter 0 to Try Again or Enter 1 to Exit.\n");
            scanf("%d", &try_again);
            switch (try_again)
            {
            case 0:
                goto try_again_pepsi;
                break;
            case 1:
                goto exit;
            default:
                printf("In-valid entry!\nRe-Decide\n");
                goto try_again2_pepsi;
                break;
            }
            break;
        }
        //
        //
        //
    case 2:
    try_again_lays:
        printf("Enter the cash price of Lay's (Salt).\n");
        scanf("%d", &input_cash);
        switch (input_cash)
        {
        case 100:
            printf("Transaction Successful!\nHere is you Food.");
            goto exit;
            break;
        default:
            printf("Transaction Unsuccessful!\nInsufficient ballence.\n");
        try_again2_lays:
            printf("Enter 0 to Try Again or Enter 1 to Exit.\n");
            scanf("%d", &try_again);
            switch (try_again)
            {
            case 0:
                goto try_again_lays;
                break;
            case 1:
                goto exit;
            default:
                printf("In-valid entry!\nRe-Decide\n");
                goto try_again2_lays;
                break;
            }
            break;
        }
        break;
        //
        //
        //
    case 3:
    try_again_kurkure:
        printf("Enter the cash price of Kurkure (Masala Munch).\n");
        scanf("%d", &input_cash);
        switch (input_cash)
        {
        case 100:
            printf("Transaction Successful!\nHere is you Food.");
            goto exit;
            break;
        default:
            printf("Transaction Unsuccessful!\nInsufficient ballence.\n");
        try_again2_kurkure:
            printf("Enter 0 to Try Again or Enter 1 to Exit.\n");
            scanf("%d", &try_again);
            switch (try_again)
            {
            case 0:
                goto try_again_kurkure;
                break;
            case 1:
                goto exit;
            default:
                printf("In-valid entry!\nRe-Decide\n");
                goto try_again2_kurkure;
                break;
            }
            break;
        }
        break;
        //
        //
        //
    case 4:
    try_again_facta:
        printf("Enter the cash price of Fanta.\n");
        scanf("%d", &input_cash);
        switch (input_cash)
        {
        case 50:
            printf("Transaction Successful!\nHere is you Drink");
            goto exit;
            break;
        default:
            printf("Transaction Unsuccessful!\nInsufficient ballence.\n");
        try_again2_fanta:
            printf("Enter 0 to Try Again or Enter 1 to Exit.\n");
            scanf("%d", &try_again);
            switch (try_again)
            {
            case 0:
                goto try_again_facta;
                break;
            case 1:
                goto exit;
            default:
                printf("In-valid entry!\nRe-Decide\n");
                goto try_again2_fanta;
                break;
            }
            break;
        }
        break;
        //
        //
        //
    case 5:
    try_again_coca_cola:
        printf("Enter the cash price of Coca-Cola.\n");
        scanf("%d", &input_cash);
        switch (input_cash)
        {
        case 50:
            printf("Transaction Successful!\nHere is you Drink");
            goto exit;
            break;
        default:
            printf("Transaction Unsuccessful!\nInsufficient ballence.\n");
        try_again2_coca_cola:
            printf("Enter 0 to Try Again or Enter 1 to Exit.\n");
            scanf("%d", &try_again);
            switch (try_again)
            {
            case 0:
                goto try_again_coca_cola;
                break;
            case 1:
                goto exit;
            default:
                printf("In-valid entry!\nRe-Decide\n");
                goto try_again2_coca_cola;
                break;
            }
            break;
        }
        break;
        //
        //
        //
    case 6:
    try_again_mirinda:
        printf("Enter the cash price of Mirinda.\n");
        scanf("%d", &input_cash);
        switch (input_cash)
        {
        case 50:
            printf("Transaction Successful!\nHere is you Drink");
            goto exit;
            break;
        default:
            printf("Transaction Unsuccessful!\nInsufficient ballence.\n");
        try_again2_mirinda:
            printf("Enter 0 to Try Again or Enter 1 to Exit.\n");
            scanf("%d", &try_again);
            switch (try_again)
            {
            case 0:
                goto try_again_mirinda;
                break;
            case 1:
                goto exit;
                break;
            default:
                printf("In-valid entry!\nRe-Decide\n");
                goto try_again2_mirinda;
                break;
            }
            break;
        }
        break;
    default:
        printf("In-valid Enter!\nChoose again.\n");
        goto choose_again;
        break;
    }
exit:
    return 0;
}