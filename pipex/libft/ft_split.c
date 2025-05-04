/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampo <ncampo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:33:32 by ana-lda-          #+#    #+#             */
/*   Updated: 2025/05/05 01:26:44 by ncampo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (*s == '\0')
		return (0);
	while (s[i])
	{
		if ((s[i] != c) && ((s[i + 1]) == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

/*tam_word calcula o tamano de uma palavra (numero de charcteres ate encontrar
o delimitador 'c') percorre a string ate encontrar o char 'c' ou o final da
string, retorna o numero de chars antes do charactere 'c'.*/
static int	tam_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

/*ft_free libera memoria alocada para o array de strings, percorre o array
da ultima ate a primeira posiao, liberando memoria de cada string,
e em seguida do proprio array*/
static int	ft_free(char **s, int n)
{
	while (n >= 0)
	{
		free(s[n--]);
	}
	free(s);
	return ('\0');
}

/* aloca memoria para o array 'result' e divide a string 's' em substrigs
usando 'c', percorre 's' ate encontrar todas as palavras, criando substrings
e copiando-as para 'result'.*/
/** @brief divide a string s em novas strings a partir de um separador
indicado por c (delimitador)
 @param s string a ser dividida.
 @param c char delimitador
 @return um array de novas strings resultante da divisao de s.
*/
char	**ft_split(char const *s, char c)
{
	int		i;
	int		n;
	char	**result;

	n = count_words(s, c);
	result = ft_calloc(sizeof(char *), (n + 1));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*s != c)
		{
			result[i] = (char *)ft_calloc(sizeof(char), tam_word(s, c) + 1);
			if (!result[i])
			{
				ft_free(result, i);
				return (NULL);
			}
			ft_strlcpy(result[i++], s, tam_word(s, c) + 1);
			s += tam_word(s, c);
		}
		s++;
	}
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	char	**t;
	int		i;

	i = 0;
	t = ft_split("", 'z');
	while (t[i - 1])
	{
		printf("%i -> %s\n", i, t[i]);
		i++;
	}
} */