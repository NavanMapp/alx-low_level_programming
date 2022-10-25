#include "lists.h"

/**
  * delete_nodeint_at_index - function
  * @head: variable
  * @index: variable
  *
  * Return: deleted node
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

<<<<<<< HEAD
    for (n = 0; n < (index - 1); n++;)
    {
        if (copy-next == NULL)
            return (-1);
		n++;
        copy = copy->next;
    }
=======
		temp = temp->next;
		count++;
	}
>>>>>>> 8a48fdd388a14dccb7180e1f25a1d2e1a427c80c

	return (-1);
}
