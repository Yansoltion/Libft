#include "libft.h"
#include <ctype.h>
void delete(void *content)
{
  free(content); // libérer la mémoire allouée pour le contenu
}

///////////////////////////////////// ft_lstclear
/*

int main()
{
    t_list *lst = NULL;

  // Ajouter des éléments à la liste
  ft_lstadd_back(&lst, ft_lstnew((void *)ft_strdup("Hello")));
  ft_lstadd_back(&lst, ft_lstnew((void *)ft_strdup("World")));
  ft_lstadd_back(&lst, ft_lstnew((void *)ft_strdup("from")));
  ft_lstadd_back(&lst, ft_lstnew((void *)ft_strdup("Libft")));
    char *ptr = lst->content;
  printf("%s\n", ptr);
  // Supprimer la liste et libérer la mémoire allouée pour chaque élément
  ft_lstclear(&lst, delete);
  printf("%s\n", ptr);
    return 0;
}

*/

/*
int main()
{
    t_list *lst = NULL;

    // Ajouter des éléments à la liste
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("Bonjour")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("monde")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("de")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("la")));
    ft_lstadd_front(&lst, ft_lstnew(ft_strdup("programmation")));

    // Supprimer le deuxième élément de la liste
    t_list *second_elem = lst->next;
    ft_lstdelone(second_elem, delete);

    // Afficher la liste après suppression
    t_list *current = lst;
    while (current != NULL)
    {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    return 0;
}

*/

/*  ft_lstiter
void print_string(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *lst = NULL;
    char *str1 = "Hello";
    char *str2 = "World";
    char *str3 = "!";
    
    lst = ft_lstnew(str1);
    ft_lstadd_back(&lst, ft_lstnew(str2));
    ft_lstadd_back(&lst, ft_lstnew(str3));
    
    ft_lstiter(lst, print_string);
    
    return 0;
}

*/

void	*uppercase(void *content)
{
	char	*str;
	char	*new_str;
	size_t	len;
	size_t	i;

	str = (char *)content;
	len = ft_strlen(str);
	new_str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = toupper(str[i]);
		i++;
	}
	return ((void *)new_str);
}

// une fonction qui libère l'espace mémoire alloué pour chaque chaîne de caractères
void	free_str(void *content)
{
	free(content);
}

int		main(void)
{
	t_list	*lst;
	t_list	*new_lst;

	// Initialisation de la liste initiale
	lst = ft_lstnew(ft_strdup("Bonjour"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("tout")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("le")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("monde")));

	// Création de la nouvelle liste en appliquant la fonction 'uppercase' sur chaque élément de la liste initiale
	new_lst = ft_lstmap(lst, uppercase, free_str);

	// Affichage de la nouvelle liste
	while (new_lst)
	{
		ft_putendl_fd((char *)new_lst->content, 1);
		new_lst = new_lst->next;
	}

	// Libération de la mémoire allouée pour les deux listes
	ft_lstclear(&lst, free_str);
	ft_lstclear(&new_lst, free_str);
	return (0);
}