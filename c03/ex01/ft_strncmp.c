/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:08:12 by tandroma          #+#    #+#             */
/*   Updated: 2021/09/05 20:15:22 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned	int	n)
{
	int	i;
	int	step;

	i = 0;
	step = 0;
	while (++step != n)
	{
		if (s1[i] && s2[i] && s1[i] == s2[i])
			i++;
	}
	if ((s1[i] - s2[i]) > 0)
		return (1);
	else if ((s1[i] - s2[i]) < 0)
		return (-1);
	else
		return (0);
}
