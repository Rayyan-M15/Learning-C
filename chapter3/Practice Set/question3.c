/* Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
    Income   Slab Tax
    2.5    –    5.0L 5%
    5.0L   -    10.0L 20%
    more than 10.0L  -    30%
Note that there is no tax below 2.5L. Take income amount as an input from the user. */

#include <stdio.h>

int main()
{

    float incamt;
    printf("Enter the Amount Of Income: ");
    scanf("%f", &incamt);

    if (incamt <= 250000)
    {
        printf("As the total income is less than 2.5L, there is no tax payable.\n");
    }
    else if (incamt > 250000 && incamt <= 500000)
    {
        printf("As the total income is more than 2.5L and less than 5L, %.2f inr is the tax payable.\n", 0.05 * (incamt - 250000));
    }
    else if (incamt > 500000 && incamt <= 1000000)
    {
        printf("As the total income is more than 5L and less than 10L, %.2f inr is the tax payable.\n", ((0.05 * (500000 - 250000)) + (0.2 * (incamt - 500000))));
    }
    else if (incamt > 1000000)
    {
        printf("As the total income is more than 10L, %.2f inr is the tax payable.\n", ((0.05 * (500000 - 250000)) + (0.2 * (1000000 - 500000)) + (0.3 * (incamt - 1000000))));
    }
    return 0;
}
