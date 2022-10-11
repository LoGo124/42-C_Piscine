/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_head.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:27:31 by mferri-m          #+#    #+#             */
/*   Updated: 2022/08/31 01:28:57 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

char *ft_cut_head(char *buff)
{
    int i;
    int j;
    char *head;

    i = 0;
    while(buff[i] && buff[i] != '\n')
        i++;
    head = (char *) malloc(i + 1 * sizeof(char));
    if (!head)
        return (NULL);
    j = 0;
    while (buff[j] && buff[j] != '\n')
    {
        head[j] = buff[j];
        j++;
    }
    head[i + 1] = '\0';
    return (head);
}

char *ft_cut_body(char *buff)
{
    int i;
    int j;
    char *body;

    i = 0;
    j = 0;
    while (buff[i] && buff[i] != '\n')
        i++;
    body = (char *) malloc(ft_strlen(buff) - i + 1 * sizeof(char));
    if (!body)
        return (NULL);
    while (buff[i++])
        body[j++] = buff[i];
    body[i + 1] = '\0';
    free(buff);
    return (body);
}
