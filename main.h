/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 11:32:43 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/07/28 12:49:18 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MAIN_H
#define	MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

enum LENGTH_MOD
{
	HH, H, L, LL, J, Z
};

typedef	struct	s_format
{
	char			*input;
	char			conversion_specifier;
	char			*flags;
	int				field_width;
	int				precision;
	enum LENGTH_MOD	len_mod;
	char			*output;
}				t_format;

#endif
