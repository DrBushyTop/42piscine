/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuuhka <phuuhka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:31:47 by phuuhka           #+#    #+#             */
/*   Updated: 2019/07/20 13:19:02 by phuuhka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ex00/match.c"
//#include"ex01/nmatch.c"

int	main(void)
{

	printf("%d", match("asdf", "asdf"));
	printf("%d", match("", ""));
	printf("%d", match("a", "a"));
	printf("%d", match("aa", "aa"));
	printf("%d", match("aaa", "aaa"));
	printf("\n11111 <- expected\n\n");

	printf("%d", match("", "asdf"));
	printf("%d", match("asdf", ""));
	printf("%d", match("asdf", "a"));
	printf("%d", match("a", "asdf"));
	printf("%d", match("asdf", "asde"));
	printf("\n00000 <- expected\n\n");

	printf("%d", match("asde", "asdf"));
	printf("%d", match("asdf", "asdff"));
	printf("%d", match("asdff", "asdf"));
	printf("%d", match("aasdf", "asdf"));
	printf("%d", match("asdf", "aasdf"));
	printf("\n00000 <- expected\n\n");

	printf("%d", match("", "*"));
	printf("%d", match("a", "*"));
	printf("%d", match("aa", "*"));
	printf("%d", match("asdf", "*"));
	printf("%d", match("asdfasdf", "*"));
		printf("\n11111 <- expected\n\n");

	printf("%d", match("asdf", "a*"));
	printf("%d", match("asdfasdf", "a*"));
	printf("%d", match("a", "a*"));
	printf("%d", match("aa", "a*"));
	printf("%d", match("aasdf", "a*"));
	printf("\n11111 <- expected\n\n");

	printf("%d", match("", "a*"));
	printf("%d", match("f", "a*"));
	printf("%d", match("fdsa", "a*"));
	printf("%d", match("faaaa", "a*"));
	printf("%d", match("faaasdf", "a*"));
	printf("\n00000 <- expected\n\n");

	printf("%d", match("fdsa", "*a"));
	printf("%d", match("a", "*a"));
	printf("%d", match("aa", "*a"));
	printf("%d", match("fdsaaaaaaafdsa", "*a"));
	printf("%d", match("dfsaaaaaaaaaaaa", "*a"));
	printf("\n11111 <- expected\n\n");

	printf("%d", match("", "*a"));
	printf("%d", match("f", "*a"));
	printf("%d", match("asdf", "*a"));
	printf("%d", match("aaaaaf", "*a"));
	printf("%d", match("fdsaaaaf", "*a"));
	printf("\n00000 <- expected\n\n");

	printf("%d", match("abc", "abc*"));
	printf("%d", match("abcdef", "abc*"));
	printf("%d", match("abccccccc", "abc*"));
	printf("%d", match("abcabc", "abc*"));
	printf("%d", match("abcdabcdabc", "abc*"));
	printf("\n11111 <- expected\n\n");

	printf("%d", match("", "abc*"));
	printf("%d", match("f", "abc*"));
	printf("%d", match("abbc", "abc*"));
	printf("%d", match("ab", "abc*"));
	printf("%d", match("abb", "abc*"));
	printf("\n00000 <- expected\n\n");
	// 50

	printf("%d", match("abc", "*abc"));
	printf("%d", match("defabc", "*abc"));
	printf("%d", match("aaaaaaabc", "*abc"));
	printf("%d", match("abcabc", "*abc"));
	printf("%d", match("abcdabcdabc", "*abc"));
	printf("\n11111 <- expected\n\n");

	printf("%d", match("", "*abc"));
	printf("%d", match("f", "*abc"));
	printf("%d", match("abbc", "*abc"));
	printf("%d", match("ab", "*abc"));
	printf("%d", match("abb", "*abc"));
	printf("\n00000 <- expected\n\n");

	printf("%d", match("a", "*a*"));
	printf("%d", match("aaa", "*a*"));
	printf("%d", match("aaaaaaabc", "*a*"));
	printf("%d", match("bcabc", "*a*"));
	printf("%d", match("sdfa", "*a*"));
	printf("\n11111 <- expected\n\n");

	printf("%d", match("", "*a*"));
	printf("%d", match("f", "*a*"));
	printf("%d", match("bcd", "*a*"));
	printf("%d", match("bb", "*a*"));
	printf("%d", match("ASDF", "*a*"));
	printf("\n00000 <- expected\n\n");

	printf("%d", match("ab", "*ab*"));
	printf("%d", match("abcd", "*ab*"));
	printf("%d", match("efabcd", "*ab*"));
	printf("%d", match("ababab", "*ab*"));
	printf("%d", match("bab", "*ab*"));
	printf("\n11111 <- expected\n\n");

	printf("%d", match("asdf", "*ab*"));
	printf("%d", match("ba", "*ab*"));
	printf("%d", match("", "*ab*"));
	printf("%d", match("f", "*ab*"));
	printf("%d", match("bbbbbbaaaaa", "*ab*"));
	printf("\n00000 <- expected\n\n");

	printf("%d", match("", "**"));
	printf("%d", match("a", "**"));
	printf("%d", match("ab", "**"));
	printf("%d", match("abc", "**"));
	printf("%d", match("abcd", "**"));
	printf("\n11111 <- expected\n\n");

	printf("%d", match("a", "a**"));
	printf("%d", match("ab", "a**"));
	printf("%d", match("abc", "a**"));
	printf("%d", match("aaaaaa", "a**"));
	printf("%d", match("asdfaaaaa", "a**"));
	printf("\n11111 <- expected\n\n");

	printf("%d", match("", "a**"));
	printf("%d", match("f", "a**"));
	printf("%d", match("fa", "a**"));
	printf("%d", match("faaaaaaa", "a**"));
	printf("%d", match("fafdsafdsa", "a**"));
	printf("\n00000 <- expected\n\n");

	printf("%d", match("asdf", "*a**"));
	printf("%d", match("sdfa", "*a**"));
	printf("%d", match("faffff", "*a**"));
	printf("%d", match("fdsaasdf", "*a**"));
	printf("%d", match("aaaaaaa", "*a**"));
	printf("\n11111 <- expected\n\n");
	// 100

	printf("%d", match("", "*a**"));
	printf("%d", match("qwerqwer", "*a**"));
	printf("%d", match("bbbbbb", "*a**"));
	printf("%d", match("c", "*a**"));
	printf("%d", match("AAAAAAAAAA", "*a**"));
	printf("\n00000 <- expected\n\n");

	printf("%d", match("main.c", "*.c"));
	printf("%d", match("main.c.c", "*.c"));
	printf("%d", match("main.h", "*.c"));
	printf("%d", match("main.cc", "*.c"));
	printf("%d", match("main.c", "*.*"));
	printf("\n11001 <- expected\n\n");

	printf("%d", match("test.main.c", "test.*.c"));
	printf("%d", match("test..c", "test.*.c"));
	printf("%d", match("test.main.h", "test.*.c"));
	printf("%d", match("main.c", "test.*.c"));
	printf("%d", match("test.c", "test.*.c"));
	printf("\n11000 <- expected\n\n");

	printf("%d", match("abcde", "a*c*e"));
	printf("%d", match("abcde", "*b*d*"));
	printf("%d", match("abcde", "a*e*c"));
	printf("%d", match("abcde", "*d*c*"));
	printf("%d", match("abcde", "a*d*d"));
	printf("\n11000 <- expected\n\n");

	printf("%d", match("*a", "*"));
	printf("%d", match("**", "*"));
	printf("%d", match("*ab", "*b"));
	printf("%d", match("a*a", "a*"));
	printf("%d", match("**a", "*a"));
	printf("\n11111 <- expected\n\n");

}
