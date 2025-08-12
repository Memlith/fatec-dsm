void clean_buffer(){
    char c;
    while ((c = getchar()) != EOF && c != '\n');
} /* This will clean the buffer */

void stop_system(){
    clean_buffer();
    printf("Press Enter to continue...");
    getchar();
} /* This will wait for the user to press Enter, similar to system("pause") */

