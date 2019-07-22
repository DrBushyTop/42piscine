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
//#include"ex00/match.c"
#include"ex01/nmatch.c"

int	main(void)
{

	printf("%d", nmatch("asdf", "asdf"));
	printf("%d", nmatch("", ""));
	printf("%d", nmatch("a", "a"));
	printf("%d", nmatch("aa", "aa"));
	printf("%d", nmatch("aaa", "aaa"));
	printf("\n11111 <- expected\n\n");

	printf("%d", nmatch("", "asdf"));
	printf("%d", nmatch("asdf", ""));
	printf("%d", nmatch("asdf", "a"));
	printf("%d", nmatch("a", "asdf"));
	printf("%d", nmatch("asdf", "asde"));
	printf("\n00000 <- expected\n\n");

	printf("%d", nmatch("asde", "asdf"));
	printf("%d", nmatch("asdf", "asdff"));
	printf("%d", nmatch("asdff", "asdf"));
	printf("%d", nmatch("aasdf", "asdf"));
	printf("%d", nmatch("asdf", "aasdf"));
	printf("\n00000 <- expected\n\n");

	printf("%d", nmatch("", "*"));
	printf("%d", nmatch("a", "*"));
	printf("%d", nmatch("aa", "*"));
	printf("%d", nmatch("asdf", "*"));
	printf("%d", nmatch("asdfasdf", "*"));
	printf("\n11111 <- expected\n\n");

	printf("%d", nmatch("asdf", "a*"));
	printf("%d", nmatch("asdfasdf", "a*"));
	printf("%d", nmatch("a", "a*"));
	printf("%d", nmatch("aa", "a*"));
	printf("%d", nmatch("aasdf", "a*"));
	printf("\n11111 <- expected\n\n");

	printf("%d", nmatch("", "a*"));
	printf("%d", nmatch("f", "a*"));
	printf("%d", nmatch("fdsa", "a*"));
	printf("%d", nmatch("faaaa", "a*"));
	printf("%d", nmatch("faaasdf", "a*"));
	printf("\n00000 <- expected\n\n");

	printf("%d", nmatch("fdsa", "*a"));
	printf("%d", nmatch("a", "*a"));
	printf("%d", nmatch("aa", "*a"));
	printf("%d", nmatch("fdsaaaaaaafdsa", "*a"));
	printf("%d", nmatch("dfsaaaaaaaaaaaa", "*a"));
	printf("\n11111 <- expected\n\n");

	printf("%d", nmatch("", "*a"));
	printf("%d", nmatch("f", "*a"));
	printf("%d", nmatch("asdf", "*a"));
	printf("%d", nmatch("aaaaaf", "*a"));
	printf("%d", nmatch("fdsaaaaf", "*a"));
	printf("\n00000 <- expected\n\n");

	printf("%d", nmatch("abc", "abc*"));
	printf("%d", nmatch("abcdef", "abc*"));
	printf("%d", nmatch("abccccccc", "abc*"));
	printf("%d", nmatch("abcabc", "abc*"));
	printf("%d", nmatch("abcdabcdabc", "abc*"));
	printf("\n11111 <- expected\n\n");

	printf("%d", nmatch("", "abc*"));
	printf("%d", nmatch("f", "abc*"));
	printf("%d", nmatch("abbc", "abc*"));
	printf("%d", nmatch("ab", "abc*"));
	printf("%d", nmatch("abb", "abc*"));
	printf("\n00000 <- expected\n\n");
// 50

	printf("%d", nmatch("abc", "*abc"));
	printf("%d", nmatch("defabc", "*abc"));
	printf("%d", nmatch("aaaaaaabc", "*abc"));
	printf("%d", nmatch("abcabc", "*abc"));
	printf("%d", nmatch("abcdabcdabc", "*abc"));
	printf("\n11111 <- expected\n\n");

	printf("%d", nmatch("", "*abc"));
	printf("%d", nmatch("f", "*abc"));
	printf("%d", nmatch("abbc", "*abc"));
	printf("%d", nmatch("ab", "*abc"));
	printf("%d", nmatch("abb", "*abc"));
	printf("\n00000 <- expected\n\n");

	printf("%d", nmatch("a", "*a*"));
	printf("%d", nmatch("aaa", "*a*"));
	printf("%d", nmatch("aaabc", "*a*"));
	printf("%d", nmatch("bcabc", "*a*"));
	printf("%d", nmatch("sdfa", "*a*"));
	printf("\n13311 <- expected\n\n");

	printf("%d", nmatch("", "*a*"));
	printf("%d", nmatch("f", "*a*"));
	printf("%d", nmatch("bcd", "*a*"));
	printf("%d", nmatch("bb", "*a*"));
	printf("%d", nmatch("ASDF", "*a*"));
	printf("\n00000 <- expected\n\n");

	printf("%d", nmatch("ab", "*ab*"));
	printf("%d", nmatch("abcd", "*ab*"));
	printf("%d", nmatch("efabcd", "*ab*"));
	printf("%d", nmatch("ababab", "*ab*"));
	printf("%d", nmatch("bab", "*ab*"));
	printf("\n11131 <- expected\n\n");

	printf("%d", nmatch("asdf", "*ab*"));
	printf("%d", nmatch("ba", "*ab*"));
	printf("%d", nmatch("", "*ab*"));
	printf("%d", nmatch("f", "*ab*"));
	printf("%d", nmatch("bbbbbbaaaaa", "*ab*"));
	printf("\n00000 <- expected\n\n");

	printf("%d", nmatch("", "**"));
	printf("%d", nmatch("a", "**"));
	printf("%d", nmatch("ab", "**"));
	printf("%d", nmatch("abc", "**"));
	printf("%d", nmatch("abcd", "**"));
	printf("\n12345 <- expected\n\n");

	printf("%d", nmatch("a", "a**"));
	printf("%d", nmatch("ab", "a**"));
	printf("%d", nmatch("abc", "a**"));
	printf("%d", nmatch("aaaa", "a**"));
	printf("%d", nmatch("asdfa", "a**"));
	printf("\n12345 <- expected\n\n");

	printf("%d", nmatch("", "a**"));
	printf("%d", nmatch("f", "a**"));
	printf("%d", nmatch("fa", "a**"));
	printf("%d", nmatch("faaaaaaa", "a**"));
	printf("%d", nmatch("fafdsafdsa", "a**"));
	printf("\n00000 <- expected\n\n");

	printf("%d", nmatch("asdf", "*a**"));
	printf("%d", nmatch("sdfa", "*a**"));
	printf("%d", nmatch("faffff", "*a**"));
	printf("%d", nmatch("fdsaasdf", "*a**"));
	printf("%d", nmatch("aaaaaaa", "*a**"));
	printf("\n415928 <- expected\n\n");
// 100

	printf("%d", nmatch("", "*a**"));
	printf("%d", nmatch("qwerqwer", "*a**"));
	printf("%d", nmatch("bbbbbb", "*a**"));
	printf("%d", nmatch("c", "*a**"));
	printf("%d", nmatch("AAAAAAAAAA", "*a**"));
	printf("\n00000 <- expected\n\n");

	printf("%d", nmatch("main.c", "*.c"));
	printf("%d", nmatch("main.c.c", "*.c"));
	printf("%d", nmatch("main.h", "*.c"));
	printf("%d", nmatch("main.cc", "*.c"));
	printf("%d", nmatch("main.c", "*.*"));
	printf("\n11001 <- expected\n\n");

	printf("%d", nmatch("test.main.c", "test.*.c"));
	printf("%d", nmatch("test..c", "test.*.c"));
	printf("%d", nmatch("test.main.h", "test.*.c"));
	printf("%d", nmatch("main.c", "test.*.c"));
	printf("%d", nmatch("test.c", "test.*.c"));
	printf("\n11000 <- expected\n\n");

	printf("%d", nmatch("abcde", "a*c*e"));
	printf("%d", nmatch("abcde", "*b*d*"));
	printf("%d", nmatch("abcde", "a*e*c"));
	printf("%d", nmatch("abcde", "*d*c*"));
	printf("%d", nmatch("abcde", "a*d*d"));
	printf("\n11000 <- expected\n\n");

	printf("%d", nmatch("abcbd", "*b*"));
	printf("%d", nmatch("abc", "a**"));
	printf("%d", nmatch("test.asdf.c.bak", "*.*.*"));
	printf("%d", nmatch("test.bak", "*.*.*"));
	printf("%d", nmatch("", "************************"));
	printf("\n23301 <- expected\n\n");

	printf("%d", nmatch("*a", "*"));
	printf("%d", nmatch("**", "*"));
	printf("%d", nmatch("*ab", "*b"));
	printf("%d", nmatch("a*a", "a*"));
	printf("%d", nmatch("**a", "*a"));
	printf("\n11111 <- expected\n\n");

}
