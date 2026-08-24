/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coffee_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdzwigal <kdzwigal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 10:25:41 by kdzwigal          #+#    #+#             */
/*   Updated: 2026/08/03 10:42:07 by kdzwigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "coffe_utils.h"

void	ft_check_filter(your effort, int time, new filter)
{
	if (old_filter_with_grounds)
		to_bio_bin(old_filter_with_grounds);
	install_new_filter(filter, effort, time);
}

void	ft_check_beans(your effort, int time, coffee beans)
{
	if (!beans)
		put_some(beans, effort, time);
}

int	ft_fill_the_water(your effort, int time, int water)
{
	if (!water)
		fill_the_water_tank(water, effort, time);
}

void	ft_set_cups(your effort, int time, int cups_od_display)
{
	set_cups_on_display(cups_od_display, effort, time);
}

void	ft_push_start(your effort, int time, int water_level)
{
	ft_check_filter(effort, time, filter);
	ft_check_beans(effort, time, beans);
	ft_set_cups(effort, time, water_level);
	if (water_level)
		push_button(on, effort, time);
}