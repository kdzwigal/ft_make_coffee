/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_coffee.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdzwigal <kdzwigal@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 10:15:49 by kdzwigal          #+#    #+#             */
/*   Updated: 2026/08/03 10:45:26 by kdzwigal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "coffee_utils.h"
#include "your_preferences.h"

void	ft_make_coffee(coffee beans, your effort, new filter)
{
	int	time;
	int	water;
	int	water_level;

	time = 10;
	water = INT_MAX;
	water_level = ft_fill_the_water(effort, time, water);
	ft_check_filter(effort, time, filter);
	ft_check_beans(effort, time, beans);
	ft_set_cups(effort, time, water_level);
	ft_push_start(effort, time, water_level);
}