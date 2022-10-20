# Temperature-Converter
## This is an Code for temperature conversion
```
 float fh,cl;
    char ch;
    printf("\n\n Press F to convert temperature from Fahrenheit to Celsius.");
    printf("\n\n Press C to convert temperature from Celsius to Fahrenheit.");
    printf("\n\n Enter your choice (c, f): ");
    scanf("%c",&ch);
```
- The code starts by declaring two variables, fh and cl.
- The first variable is a float that will hold the temperature in Fahrenheit and
 the second variable is a float that will hold the temperature in Celsius.
- The code then asks for input from the user on how to convert between Fahrenheit and Celsius temperatures.
- It does this using printf() statements with three different prompts: "Press F to convert temperature from Fahrenheit to Celsius", "Press C to convert temperature from Celsius to Fahrenheit", "Press C to convert temperature from Celsius to Fahrenheit".
- The code attempts to ask the user for input.
- The first line prints a prompt that asks the user to enter their choice (c, f).
- The second line reads the input from the user and stores it in ch.
```
if((ch =='c') ||(ch =='C'))
    {
        printf("\n\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("\n\nTemperature in Celsius: %.2f\n\n",cl);
    }
```
- As you can see we have to use if-else ladder to perform code.
- The code is asking the user to enter a temperature in Fahrenheit.
- celsius is calculated using this formula: (fahrenheit-32) / 1.8 which gives us our final result of cl = (fh-32) / 1.8
- The code then calculates Celsius from that value and prints it out.
```
 else if((ch =='f') ||(ch =='F'))
    {
        printf("\n\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("\n\nTemperature in Fahrenheit: %.2f\n\n",fh);
    }
```
- The code starts by asking the user to enter a temperature in Celsius.
- fahrenheit is calculated using this formula: (celsius * 1.8) + 32 which gives us our final result of fh = (cl * 1.8) + 32
- The code then calculates fahrenheit from that value and prints it out.
- And then in the **else** part of the code we write this beacuse if the character given by the user is not the desired input expected by the code then it's going to show **"Invalid Choice"**
