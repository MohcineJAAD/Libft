#include "libft.h"

int main()
{
    t_list    *head;
    t_list    *last;

    head = NULL;
    int a[] = {1, 2, 3, 4 , 5};
    
    for (int i = 0; i < 5; i++)
    {
        ft_lstadd_back(&head, ft_lstnew(a + i));
    }
    printf("%d\n", ft_lstsize(head));
    while (head)
    {
        printf("%d\n",*((int *)(head->content)));
        head = head->next;
    }
}


CreateFILE