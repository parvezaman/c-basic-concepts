char name[20];
    int donation = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("please enter the name of friend %d: ", i + 1);
        scanf("%s", name);

        printf("Enter ammount of donation: ");
        scanf("%d", &donation);

        fprintf(fp, "%s %d\n", name, donation);
    }