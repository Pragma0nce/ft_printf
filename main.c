/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 11:19:57 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/07/28 12:50:58 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	count_specifiers(const char *fmt)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i + 1] != '%')
			count++;
		i++;
	}
	return (count);
}
int	ft_printf(const char* fmt, ...)
{
	va_list 	args;
	int			format_count;
	t_format	*format;
	
	format_count = count_specifiers(fmt);
	format = (t_format*)malloc(sizeof(t_format) * format_count);
	va_start(args, fmt);



	return (0);
}

int	main(int argc, char **argv)
{
	ft_printf("ayy lmao %d");
	return (0);
}
