#include <stdio.h>


int main()
{
    int P1;
    int D1;
    int D2;
    int D3;
    int D4;
    int D5;
    int D6;
    int D7;
    int D8;
    int D9;
    int D10;
    int D11; //Declared in case a future update adds a flower with this letter
    int D12;
    int D13;
    int D14;
    int D15;
    int D16;
    int D17; //Declared in case a future update adds a flower with this letter 
    int D18;
    int D19;
    int D20;
    int D21;
    int D22;
    int D23;
    int D24; //Declared in case a future update adds a flower with this letter
    int D25;
    int D26;
    int F1;
    int F2;
    int F3;
    int CC1;
    int A1;
    int A2;
    int A3;
    int A4;
    int A5;
    int A6;
    int T1;
    int B1;
    int G1;



    printf("Choose an option:\n");
    printf("1-Received a message\n");
    printf("2- Want to send a message\n");
    scanf("%d",&P1);
    if(P1==1){
        printf("WARNING!!! Flowers can sometimes be toxic to the touch or when eaten, be careful\n\n");
        printf("What is the first letter of the name of the plant? Type the number equivalent of the letter\n");
        printf("  1-A   2-B   3-C   4-D   5-E\n");
        printf(" 6-F   7-G   8-H   9-I  10-J\n");
        printf("11-K  12-L  13-M  14-N  15-O\n");
        printf("16-P  17-Q  18-R  19-S  20-T\n");
        printf("21-U  22-V  23-W  24-X  25-Y\n");
        printf("26-Z\n");
        scanf("%d", &CC1);
        switch(CC1){

        case 1:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Aconite          2- Amaryllis         3- Anemone\n");
        printf("4- Apple blossom    5- Asphodel          6- Aster\n");
        printf("7- Athanasia        8- Azalea\n");
        printf("Type the number here:\n");
        scanf("%d", &D1);
        switch(D1){

        case 1:  //Aconite
        printf("Aconite is usually used to mean protection, loyalty, and cavalry; sometimes it can be used to mean a warning due to being a poisonous flower\n");
        break;

        case 2:  //Amaryllis
        printf("Amaryllis is often used to mean pride, beauty, and strength\n");
        break;

        case 3:  //Anemone
        printf("Anemone is usually used to mean a broken heart or abandonment\n");
        break;

        case 4: //Apple blossom
        printf("Apple blossoms can be used to mean a choice made\n");
        break;

        case 5: // Asphodel
        printf("Asphodelus are usually used to mean that the person's sorrow will accompany you to the grave\n");
        printf("Curiosity: In the first Harry Potter movie from J.K. Rowling, the character Snape asks Harry what will be the result of a potion with this flower, which could be a hidden message\n");
        break;

        case 6:  // Aster  
        printf("The aster is often used to represent tenderness, love, and good luck\n");
        printf("This plant's meanings can change based on the color. Type the color number to see other meanings: \n");
        printf("1- White  2- Pink  3- Purple  4- Lavender  5- Blue\n");
        scanf("%d", &F1);
        switch (F1)
        {
        case 1:
            printf("Meanings: innocence, condolences, and new beginnings\n");
            break;

        case 2:
        printf("Meanings: gratitude, grace, and happiness\n");
        break;

        case 3:
        printf("Meanings: admiration and dignity\n");
        break;

        case 4:
        printf("Meanings: Grace, calmness, and first love\n");
        break;

        case 5:
        printf("Meanings: Trust and peace\n");
        break;
            
        default:
        printf("Sorry, the number may be wrong; try again\n");
     
            break;
        }
        break;

        case 7: //Athanasia
        printf(" Athanasia can be used to symbolize a slight hostility\n");
        break;

        case 8: //Azalea
        printf(" Azalea is often used to mean fragility, temperance, resilience, harmony, and beauty\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
      
        break;
        }
        


        case 2:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Baby's breath    2- Bachelor's button/Cornflower\n");
        printf("3- Basil            4- Bay leaves\n");
        printf("5- Begonia          6-Belladonna\n");
        printf("7- Buttercup\n");
        printf("Type the number here:\n");
        scanf("%d", &D2);
        switch(D2){

        case 1: //Baby`s breath
        printf("Baby's breath can be used to mean innocence or eternal love\n");
        break;

        case 2: // bachelor`s button/Cornflower
        printf("Bachelor's button, or cornflower, is used to mean great hopes for the future of love or a relationship\n");
        break;

        case 3: // Basil
        printf(" Basil can be used to mean deep hate or distrust\n");
        break;

        case 4: // Bay leaves
        printf("Bay leaves can be used to mean victory, glory, and success\n");
        break;

        case 5: //Begonia 
        printf("Begonia can be used to mean a warning or the retribution of a favor\n");
        break;

        case 6: //Belladonna
        printf("Belladonna is often used to mean silence or a warning and can be used to ask someone for silence\n");
        break;

        case 7: //Buttercup
        printf("Buttercup can be used to tell someone they are charming and can also be used to wish for prosperity and luck\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
  
        break;

        }
        break;

        case 3:
        printf("Is the flower/plant one of the following?\n");
        printf( "1- Camellia        2- Carnation                         3- Cardoon/Thistle\n");
        printf( "4- Cat-tail        5- Chamomile                         6- Chrysanthemum\n");
        printf( "7- Clematis        8- Clover                            9- Columbine \n");
        printf("10- Cornflower     11- Cypress                          12- Wild Carrot\n");
        printf("Type the number here:\n");
        scanf("%d", &D3);
        switch(D3){

        case 1: //Camellia
        printf("Camellia is often used to say you miss someone\n");
        break;

        case 2: // Carnation
        printf("Carnation can mean maternal love or suffering\n");
        break;

        case 3: //Cardoon/Thistle
        printf("Cardoon is often used to mean antipathy or distrust\n");
        break;

        case 4: //Cat-Tail
        printf("Cat-tail can be used to mean peace and prosperity\n");
        break;

        case 5: //Chamomile
        printf("Chamomile is often used to mean strength among adversities or peace\n");
        break;

        case 6: //Chrysanthemum
        printf("Chrysanthemums can be used to give someone condolences\n");
        break;


        case 7: //Clematis
        printf("Clematite can be used to mean creativity and intelligence\n");
        break;


        case 8: //Clover
        printf("Clover is often used to mean good luck\n");
        break;

        case 9: //Columbine
        printf("Columbine can be used to mean naivety, devotion, and eternal love\n");
        break;

        case 10: //Cornflower/bachelor`s button
        printf("Bachelor's button, or cornflower, is used to mean great hopes for the future of love or a relationship\n");
        break;


        case 11: //Cypress
        printf("Cypress can be used to mean grief\n");
        break;

        case 12: //Wild Carrot
        printf("Wild carrots can be used to mean a sanctuary or home\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
    
        break;

        }
        break;


        
        case 4:
        
        printf("Is the flower/plant one of the following?\n");
        printf("1- Dahlia      2- Daisy\n");
        printf("3- Dandelion   4- Dogwood flower\n");
        printf("Type the number here:\n");
        scanf("%d", &D4);
        switch(D4){

        case 1: //Dahlia
        printf("Dahlia can be used to mean commitment or kindness\n");
        break;

            
        case 2: // Daisy
        printf(" Daisy is often used to mean innocence and childhood\n");
        break;


        case 3: //Dandelion
        printf(" Dandelion can be used to mean divination, fortune-guessing, or a wish\n");
        break;


            
        case 4: // Dogwood flower
        printf("Dogwood flower is often used to mean a love that will overcome adversities\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
    
        break;
        }
        break;

        case 5:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Edelweiss      2- Eucalyptus\n");
        printf("Type the number here:\n");
        scanf("%d", &D5);
        switch(D5){

        case 1: //Edelweiss
        printf("Edelweiss is often used to mean bravery\n");
        break;
            
        case 2: //Eucalyptus
        printf("Eucalyptus can be used to mean protection and transformation\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
       
        break;

        }
        break;

        case 6:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Fern          2- Forget-me-not\n");
        printf("3- Foxglove\n");
        printf("Type the number here:\n");
        scanf("%d", &D6);
        switch(D6){

        case 1: //Fern
        printf("Fern can be used to mean magic but more often mistery\n");
        break;


        case 2: //Forget-me-not
        printf("Forget-me-nots are often used to ask someone to not forget\n");
        break;



        case 3: //Foxglove
        printf("Foxglove can be used to mean a secret or riddle\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
  
        break;

            
        }
        break;

        case 7:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Gladiolus \n");
        printf("Type the number here:\n");
        scanf("%d", &D7);

        switch(D7){
        case 1: //Gladiolus
        printf("Gladiolus can be used to tell someone they broke your heart and can also be used to mean memories or victory\n");
        printf("In some cultures gladiolus was usualy used to mean a meeting, being the number of flowers the time the meeting would occur\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
       
        break;

        }
        break;

        case 8:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Heather          2- Hellebore         3- Hemlock\n");
        printf("4- Holly            5- Honeysuckle       6- Hyacinth\n");
        printf("7- Wild Hyacinth    8- Hydrangea         9-Hyssop\n");
        printf("Type the number here:\n");
        scanf("%d", &D8);
        switch(D8){

        case 1: // Heather
        printf("Heather can be used to mean wishing for luck or protection\n");
        break;


        case 2: // Hellebore
        printf("Hellebore is often used to tell someone they will overcome the scandal, and renovation\n");
        break;

        case 3: //Hemlock
        printf("Hemlock is often used to mean death\n");
        printf("Curiosity: Hemlock was used as an execution poison in the past, being the cause of death for philosophers like Socrates and Seneca\n");
        break;

        case 4: //Holly
        printf("Holly is often used to mean protection against bad luck and clairvoyance\n");
        break;


        case 5: //Honeysuckle
        printf("Honeysuckle can be used to mean devotion, dedication, and care\n");
        break;


        case 6: //Hyacinth
        printf("Hyacinth is often used to ask for forgiveness or to express sincerity\n");
        break;


        case 7: //Wild Hyacinth
        printf("Wild hyacinth can be used to mean loyalty, humility, and forgiveness\n");
        break;


        case 8: //Hydrangea
        printf("Hydrangea can have many meanings, like cruelty, sincerity, and abundance\n");
        break;


        case 9: //Hyssop
        printf("Hyssop flowers can be used to mean cleanness, resilience, and regeneration\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
      
        break;

        }
        break;

        case 9:
        switch(D9){

        case 1: //Iris
        printf("Iris flowers are often used to mean bravery, knowledge, and faith\n");
        break;

        case 2: //Ivy
        printf("Ivy is usually used for loyalty and attachment\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
      
        break;


        }
        break;

        case 10:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Jasmine   2- Jimsonweed\n");
        printf("Type the number here:\n");
        scanf("%d", &D10);
        switch(D10){

        case 1: //Jasmine
        printf("Jasmine is often used to mean happiness and kindness\n");
        break;


        case 2: //Jimsonweed
        printf("Jimsonweed can be used to mean a deceitful grace\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
        
        break;

        }
        break;

        case 11:
        printf("Sorry, we still don't have any flowers starting with the letter K\n");
        break;

        case 12:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Lavender    2- Lilac\n");
        printf("3- Lily        4- Lily of the valley\n");
        printf("Type the number here:\n");
        scanf("%d", &D12);
        switch(D12){

        case 1: //Lavender
        printf("Lavender can be used to mean distrust or spirituality\n");
        break;

        case 2: //Lilac
        printf("Lilacs are usually used to mean first love\n");
        break;

        case 3: //Lily
        printf("Lily is often used to mean innocence\n");
        break;

        case 4: //Lily of the valley
        printf("Lily of the valley is usually used to mean the return of happiness\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
  
        break;

        }
        break;

        case 13:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Magnolia    2- Marigold\n");
        printf("3- Mint        4- Mistletoe\n");
        printf("5- Myrtle\n");
        printf("Type the number here:\n");
        scanf("%d", &D13);
        switch(D13){

        case 1: //Magnolia
        printf("Magnolia can be used to mean dignity and kindness\n");
        break;

        case 2: //Marigold
        printf("Marigold can be used to mean grief and sometimes gratitude\n");
        break;


        case 3: //Mint
        printf("Mint is often used to mean comfort\n");
        break;


        case 4: //Mistletoe
        printf("Mistletoe is usually used to mean a hope for better times\n");
        break;


        case 5: //Myrtle
        printf("Myrtle can be used to mean love, not romantic, loyalty, and beauty\n");
            
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
     
        break;

        }
        break;

        case 14:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Narcissus    2- Nettle\n");
        printf("Type the number here:\n");
        scanf("%d", &D14);
        switch(D14){

        case 1: //Narcissus
        printf("Narcissus can be used to mean a non-reciprocal love\n");
        break;

        case 2: // Nettle
        printf("Nettle is often used to mean to say someone was cruel\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
    
        break;

        }
        break;

        case 15:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Oak               2- Oleander       3- Olive tree/branch\n");
        printf("4- Orange blossom   5- Orchid         6- Slipper Orchid\n");
        printf("Type the number here:\n");
        scanf("%d", &D15);
        switch(D15){

        case 1: //Oak
        printf("Oak can be used to mean bravery and stability\n");
        break;

        case 2: //Oleander
        printf("Oleander is often used to ask someone to be careful\n");
        break;


        case 3: //Olive tree/branch
        printf("Olive branches can mean peace and reconciliation\n");
        break;


        case 4: //Orange blossom
        printf("Orange blossoms are usually used to celebrate a relationship, eternal love, and marriage\n");
        break;


        case 5: //Orchid
        printf("Orchid can be used to mean elegance, beauty, and fascination\n");
        break;

        case 6: //Slipper Orchid
        printf("Slipper orchid is often used to tell someone to be careful and tidy\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
       
        break;

        }
        break;

        case 16:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Pansy   2- Passionflower/Passionfruit flower\n");
        printf("3- Peony   4- Petunia\n");
        printf("5- Poppy   6- Protea\n");
        printf("7- Primrose\n");
        printf("Type the number here:\n");
        scanf("%d", &D16);
        switch(D16){

        case 1: //Pansy
        printf("Pansy can be used to say you think about the person\n");
        break;

        case 2: //Passionflower
        printf("Passionflower can be used to mean faith, not necessarily religious\n");
        break;

        case 3: //Peony
        printf("Peony is often used to mean shyness and emotional balance\n");
        break;

        case 4: //Petunia
        printf("Petunia is usually used to mean anger, resentment, or transformation\n");
        break;

        case 5: //Poppy
        printf("Poppy can be used to honor someone who passed away and can also mean eternal sleep, death, and grief\n");
        break;

        case 6: //Protea
        printf("Protea is often used to mean transformation and change\n");
        break;

        case 7: //Primrose
        printf("Primrose is often used to tell someone they are a graceful person\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
     
        break;

        }
        break;

        case 17:
        printf("Sorry, we still don't have any flowers starting with the letter Q\n");
        break;

        case 18:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Rose   2-Rosemary\n");
        printf("3- Rue\n");
        printf("Type the number here:\n");
        scanf("%d", &D18);
        switch(D18){

        case 1: //Rose
        printf("What color is it?\n");
        printf("1- Red   2- Pink   3- Orange   4- Yellow    5- Green   6- Blue   7- Purple   8- Black   9- White \n");
        scanf("%d", &F2);
        switch(F2){

        case 1:
        printf("Meanings: Love and passion\n");
        break;

        case 2:
        printf("Meanings: Niceness and admiration\n");
        break;

        case 3:
        printf("Meanings: Excitement\n");
        break;

        case 4:
        printf("Meanings: Friendship and Happiness\n");
        printf("Be careful, in some cultures a yellow rose can mean betrayal and distrust\n");
        break;

        case 5:
        printf("Meanings: Harmony and hope\n");
        break;

        case 6:
        printf("Meanings: rarity and mystery\n");
        break;

        case 7:
        printf("Meanings: Respect and spirituality\n");
        break;

        case 8:
        printf("Meanings: mystery, goodbyes, or grief\n");
        break;

        case 9:
        printf("Meanings: Peace or farewell\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
     
        break;

        }
        break;

        case 2: //Rosemary
            printf("Rosemary is usually used to mean knowledge, memory, and sometimes loyalty, protection, and good luck\n");
        break;

        case 3: //Rue
            printf("There are two main common meanings of rue, the first being a threat, that the person receiving would regret and the second being spiritual protection\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
       
        break;

        }
        break;

        case 19:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Saffron              2- Slipper orchid\n");
        printf("3-Snowpiercer  4- Stramonium    5- Sunflower\n");
        printf("6- Sweet pea flower\n   7- Snapdragon");
        printf("Type the number here:\n");
        scanf("%d", &D19);
        switch(D19){

        case 1: //Saffron
        printf("Saffron flowers can be used to mean contentment and glee\n"); 
        break;

        case 2: //Slipper orchid
        printf("Slipper orchid is often used to tell someone to becareful and and tidy\n");
        break;

        case 3: //Snowpiercer
        printf("Snowpiercer flowers can be used to mean to comfort someone, hope, and new starts\n");
        break;

        case 4: //Stramonium
        printf("Jimsonweed can be used to mean a deceitful grace\n");
        break;

        case 5: //Sunflower
        printf("Sunflowers can have many meanings, such as false richness, dignity, optimism, and brightness\n");
        break;

        case 6: //Sweet pea flower
        printf("Sweet pea flowers are often used to mean gratitude and niceness\n");
        break;

        case 7: //Snapdragon
        printf("Snapdragon flowers can be used to mean arrogance, bravery, and strength\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
        
        break;

        }
        break;

        case 20:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Thistle/Cardoon     2- Tulip\n");
        printf("Type the number here:\n");
        scanf("%d", &D20);
        switch(D20){

        case 1: //Thistle
        printf("Thistle is often used to mean antipathy or distrust\n");
        break;

        case 2: //Tulip 
        printf("Tulips can be used to mean a love declaration and prosperity\n");
        printf("This plant's meanings can change based on the color. Type the color number to see other meanings:\n");
        printf("1- Red  2- Pink  3- Orange  4- Yellow  5- Purple  6- White  7- Black\n");
        scanf("%d", &F3);
        switch (F3)
        {
        case 1:
            printf("Meaning: True love\n");
            break;

        case 2:
            printf("Meanings: Love and care\n");
            break;

        case 3:
            printf("Meaning: Vitality\n");
            break;

        case 4:
            printf("Meaning: Prosperity\n");
            break;

        case 5:
            printf("Meanings: Tranquility and peace\n");
            break;

        case 6:
            printf("Meanings: Forgiveness\n");
            break;

        case 7:
            printf("Meanings: Elegance\n");
            break;
            
        default:
        printf("Sorry, the number may be wrong; try again\n");
    
            break;
        }
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
       
        break;

        }
        break;

        case 21:
        printf(" Sorry, we still don't have any flowers starting with the letter U\n");
        break;

        case 22:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Violet\n");
        printf("Type the number here:\n");
        scanf("%d", &D22);
        switch(D22){

        case 1: //Violet
        printf("Violets are often used to mean modesty and humility\n");
        break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
      
        break;

        }

        break;

        case 23:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Weeping Willow                2- Wheat\n");
        printf("3- White hawthorn flower         4- Wild carrot\n");
        printf("5- Wild Hyacinth                 6- Wormwood\n");
        printf("Type the number here:\n");
        scanf("%d", &D23);
        switch(D23){

            case 1: //Weeping willow
            printf("Weeping willows are usually used to mean grief, melancholy, and, some rare times, magic\n");
            break;

            case 2: //Wheat
            printf("Wheat can be used to mean richness, prosperity, and abundance\n");
            break;

            case 3: //White Hawthorn Flower
            printf("White hawthorn flowers are often used to mean hope, hope in love and protection\n");
            break;

            case 4: //Wild Carrot
            printf("Wild carrots can be used to mean a sanctuary or home\n");
            break;

            case 5: //Wild Hyacinth
            printf("Wild hyacinth can be used to mean loyalty, humility, and forgiveness\n");
            break;

            case 6: //Wormwood
            printf("Wormwood can be used to mean bitterness or a bad situation\n");
            printf("Depending on the arrangement, it is common for it to not mean something bad; for example, it can mean that you will respect a decision despite disagreeing with it\n");
            break;

            default:
            printf("Sorry, the number may be wrong; try again\n");
           
            break;

        }
        break;

        case 24:
        printf("Sorry, we still don't have any flowers starting with the letter X\n");
        break;

        case 25:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Yarrow\n");
        printf("Type the number here:\n");
        scanf("%d", &D25);
        switch(D25){

            case 1: //Yarrow
            printf("Yarrow can be used to mean healing and protection\n");
            break;

            default:
            printf("Sorry, the number may be wrong; try again\n");
            
            break;

        }
        break;

        case 26:
        printf("Is the flower/plant one of the following?\n");
        printf("1- Zinnia\n");
        printf("Type the number here:\n");
        scanf("%d", &D26);
        switch(D26){

            case 1: //Zinnia
            printf("Zinnia is often used to mean eternal friendship, happiness, strength, and persistence\n");
            break;

            default:
            printf("Sorry, the number may be wrong; try again\n");
            
             break;
        }
        break;
    }  
    }else{
  if(P1==2){
 printf("This option will give some ideas on flowers to send messages, for more detailed messages check the first option\n");
 printf("What kind of message do you want to send?\n");
 printf("1- Good   2- Bad\n");
 scanf("%d", &T1);
 switch (T1)
 {
 case 1: //Good
    printf("Good option choosen\n\n");
    printf("Choose one:\n");
    printf("1- Family\n");
    printf("2- Friendship\n");
    printf("3- Romance\n");
    scanf("%d", &G1);
    switch (G1)
    {
    case 1://Family
        printf("Choose one:\n");
        printf("1- Admiration\n");
        printf("2- Loyalty\n"); 
        printf("3- Missing someone\n");
        scanf("%d", &A1);
            switch (A1)
            {
                case 1://Admiration
                printf("To show admiration for a family member you can try giving a purple Aster\n");
                printf("The Aster is often used to represent tenderness, love, and good luck\n");
                printf("Purple Asters can be used to mean admiration and dignity\n");
                break;

                case 2://Loyalty
                printf("To show Loyalty to a family member you can try giving Myrtle\n");
                printf("Myrtle can be used to mean love, not romantic, loyalty, and beauty\n");
                break;

                case 3://Missing someone
                printf("To show that you miss a family member you can use Camellia\n");
                printf("Camellia is often used to say you miss someone\n");
                break;

                default:
                printf("Sorry, the number may be wrong; try again\n");
                break;
                }
                break;

        case 2:
        printf("Choose one:\n");//Friendship
        printf("1- Admiration\n");
        printf("2- Eternal friendship\n");
        printf("3- Loyalty\n"); 
        printf("4- Missing someone\n");
        scanf("%d", &A2);
        switch (A2)
        {
        case 1://Admiration
            printf("To show admiration for a friend you can try giving a purple Aster or Yellow roses\n");
            printf("The Aster is often used to represent tenderness, love, and good luck'\n");
            printf("Purple Asters can be used to mean admiration and dignity\n");
            printf("Yellow roses can be used to mean Friendship and Happiness\n");
            printf("Be careful, in some cultures a yellow roses can mean betrayal and distrust\n");
            break;

        case 2: //Eternal Friendship
            printf("To show Eternal friendship you can try giving Zinnia\n");
            printf("Zinnia is often used to mean eternal friendship, happiness, strength, and persistence\n");
            break;

        case 3: //Loyalty
            printf("To show Loyalty to a friend you can try giving Aconite, Wild Hyacinth or Rosemary\n");
            printf("Aconite is usually used to mean protection, loyalty, and cavalry; sometimes it can be used to mean a warning due to being a poisonous flower\n");
            printf("Wild hyacinth can be used to mean loyalty, humility, and forgiveness\n");
            printf("Rosemary is usually used to mean knowledge, memory, and sometimes loyalty, protection, and good luck\n");
            break;

        case 4://Missing someone
            printf("To show that you miss a friend you can use Camellia\n");
            printf("Camellia is often used to say you miss someone\n");
            break;
        
        default:
        printf("Sorry, the number may be wrong; try again\n");
            break;
        }
        break;

    case 3://Romance
        printf("Choose one:\n");
        printf("1- Declaration\n");
        printf("2- Eternal love\n");
        printf("3- First love\n");
        printf("4- Thinking of them\n");
        scanf("%d", &A3);
        switch (A3)
        {
            case 1: //Declaration
            printf("To declare your love for someone you can give them Red roses, Columbine or Tulips, especialy Red an pink ones\n");
            printf("Red roses can be used to mean Love and passion\n");
            printf("Columbine can be used to mean naivety, devotion, and eternal love\n");
            printf("Tulips can be used to mean a love declaration and prosperity\n");
            printf("Red tulips can be used to mean True love\n");
            printf("Pink tulips can be used to mean Love and care\n");

            break;

            case 2: //Eternal love
            printf("To declare eternal you can give Red roses, Baby's breath, Columbine or Orange blossoms\n");
            printf("Red roses can be used to mean Love and passion\n");
            printf("Baby's breath can be used to mean innocence or eternal love\n");
            printf("Columbine can be used to mean naivety, devotion, and eternal love\n");
            printf("Orange blossoms are usually used to celebrate a relationship, eternal love, and marriage\n");


            break;

            case 3://First love
            printf("If you want to give a flower to your first love you can give Lilacs or Lavender Asters\n");
            printf("Lilacs are usually used to mean first love\n");
            printf("The aster is often used to represent tenderness, love, and good luck\n");
            printf("Lavender Asters can mean grace, calmness, and first love\n");
            
            break;

            case 4://Thinking of them
            printf("If you want to say someone you are thinking of them you can give them a Pansy\n");
            break;

        
        default:
        printf("Sorry, the number may be wrong; try again\n");
            break;
        }
        break;
    
    default:
    printf("Sorry, the number may be wrong; try again\n");
        break;
    }
    break;

    case 2: //Bad
    printf("Bad option choosen\n\n");
    printf("Choose one:\n");
    printf("1- Family\n");
    printf("2- Friendship\n");
    printf("3- Love\n");
    scanf("%d", &B1);
    switch (B1)
    {
    case 1:
        printf("Choose one:\n");
        printf("1- Broken trust\n");
        printf("2- Distance\n"); 
        printf("3- Mild hostility\n"); 
        printf("4- Ressentment\n"); 
        scanf("%d", &A4);
        switch (A4)
        {
        case 1:
            printf("To tell someone they broke your trust you can give Yellow roses, cardoon/thistle or Basil\n");
            printf("In some cultures a yellow roses can mean betrayal and distrust\n");
            printf("Cardoon is often used to mean antipathy or distrust\n");
            printf(" Basil can be used to mean deep hate or distrust\n");
            break;
        
        case 2:
            printf("To say you want distance you can give a Petunia\n");
            printf("Petunia is usually used to mean anger, resentment, or transformation\n");
            break;

        case 3:
            printf("To simbolize mild hostility Athanasia can be given\n");
            printf("Athanasia can be used to symbolize a slight hostility\n");
            break;

        case 4:
            printf("To simbolize Ressentment Petunia can be guven\n");
            printf("Petunia is usually used to mean anger, resentment, or transformation\n");

            break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
            break;
        }
        break;

    case 2:
        printf("Choose one:\n");
        printf("1- Broken trust\n");
        printf("2- Distance\n");
        printf("3- Mild hostility\n");
        printf("4- Ressentment\n");
        scanf("%d", &A5);
        switch (A5)
        {
        case 1:
            printf("To tell someone they broke your trust you can give Yellow roses, cardoon/thistle or Basil\n");
            printf("In some cultures a yellow roses can mean betrayal and distrust\n");
            printf("Cardoon is often used to mean antipathy or distrust\n");
            printf(" Basil can be used to mean deep hate or distrust\n");
            break;
        
        case 2:
            printf("To say you want distance you can give a Petunia\n");
            printf("Petunia is usually used to mean anger, resentment, or transformation\n");
            break;

        case 3:
            printf("To simbolize mild hostility Athanasia can be given\n");
            printf("Athanasia can be used to symbolize a slight hostility\n");
            break;

        case 4:
            printf("To simbolize Ressentment Petunia can be guven\n");
            printf("Petunia is usually used to mean anger, resentment, or transformation\n");
            break;

        default:
        printf("Sorry, the number may be wrong; try again\n");
            break;
        }
        
        break;

    case 3:
        printf("Choose one:\n");
        printf("1- Broken heart\n");
        printf("2- Broken trust\n");
        printf("3- Mild hostility\n");
        printf("4- Not interested\n");
        scanf("%d", &A6);
        switch (A6)
        {
        case 1:
            printf("To tell someone they broke your heart you can give an Anemone\n");
            printf("Anemone is usually used to mean a broken heart or abandonment\n");
            break;
        
        case 2:
            printf("To tell someone they broke your trust you can give Yellow roses, cardoon/thistle or Basil\n");
            printf("In some cultures a yellow roses can mean betrayal and distrust\n");
            printf("Cardoon is often used to mean antipathy or distrust\n");
            printf("Basil can be used to mean deep hate or distrust\n");
            break;

        case 3:
            printf("To simbolize mild hostility Athanasia can be given\n");
            printf("Athanasia can be used to symbolize a slight hostility\n");
            break;

        case 4:
            printf("To tell someone their love is not reciprocal a Narcissus can be given\n");
            printf("Narcissus can be used to mean a non-reciprocal love\n");
            break;
        default:
        printf("Sorry, the number may be wrong; try again\n");
            break;
        }
        break;
    
    default:
        printf("Sorry, the number may be wrong; try again\n");
        break;
    }
    break;

    
 
 default:
    printf("Sorry, the number may be wrong; try again\n");
  
    break;
 }
            

    }else{
        printf("Sorry, the number may be wrong; try again\n");
        }

    }

    return 0;
    }
