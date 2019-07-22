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

	printf("%s", nmatch("asdf", "asdf"), 1);
	printf("%s", nmatch("", ""), 1);
	printf("%s", nmatch("a", "a"), 1);
	printf("%s", nmatch("aa", "aa"), 1);
	printf("%s", nmatch("aaa", "aaa"), 1);
	printf("\n11111 <- expected\n\n");

	printf("%s", nmatch("", "asdf"), 0);
	printf("%s", nmatch("asdf", ""), 0);
	printf("%s", nmatch("asdf", "a"), 0);
	printf("%s", nmatch("a", "asdf"), 0);
	printf("%s", nmatch("asdf", "asde"), 0);
	printf("\n00000 <- expected\n\n");

	printf("%s", nmatch("asde", "asdf"), 0);
	printf("%s", nmatch("asdf", "asdff"), 0);
	printf("%s", nmatch("asdff", "asdf"), 0);
	printf("%s", nmatch("aasdf", "asdf"), 0);
	printf("%s", nmatch("asdf", "aasdf"), 0);
	printf("\n00000 <- expected\n\n");

	printf("%s", nmatch("", "*"), 1);
	printf("%s", nmatch("a", "*"), 1);
	printf("%s", nmatch("aa", "*"), 1);
	printf("%s", nmatch("asdf", "*"), 1);
	printf("%s", nmatch("asdfasdf", "*"), 1);
	printf("\n11111 <- expected\n\n");

	printf("%s", nmatch("asdf", "a*"), 1);
	printf("%s", nmatch("asdfasdf", "a*"), 1);
	printf("%s", nmatch("a", "a*"), 1);
	printf("%s", nmatch("aa", "a*"), 1);
	printf("%s", nmatch("aasdf", "a*"), 1);
	printf("\n11111 <- expected\n\n");

	printf("%s", nmatch("", "a*"), 0);
	printf("%s", nmatch("f", "a*"), 0);
	printf("%s", nmatch("fdsa", "a*"), 0);
	printf("%s", nmatch("faaaa", "a*"), 0);
	printf("%s", nmatch("faaasdf", "a*"), 0);
	printf("\n00000 <- expected\n\n");

	printf("%s", nmatch("fdsa", "*a"), 1);
	printf("%s", nmatch("a", "*a"), 1);
	printf("%s", nmatch("aa", "*a"), 1);
	printf("%s", nmatch("fdsaaaaaaafdsa", "*a"), 1);
	printf("%s", nmatch("dfsaaaaaaaaaaaa", "*a"), 1);
	printf("\n11111 <- expected\n\n");

	printf("%s", nmatch("", "*a"), 0);
	printf("%s", nmatch("f", "*a"), 0);
	printf("%s", nmatch("asdf", "*a"), 0);
	printf("%s", nmatch("aaaaaf", "*a"), 0);
	printf("%s", nmatch("fdsaaaaf", "*a"), 0);
	printf("\n00000 <- expected\n\n");

	printf("%s", nmatch("abc", "abc*"), 1);
	printf("%s", nmatch("abcdef", "abc*"), 1);
	printf("%s", nmatch("abccccccc", "abc*"), 1);
	printf("%s", nmatch("abcabc", "abc*"), 1);
	printf("%s", nmatch("abcdabcdabc", "abc*"), 1);
	printf("\n11111 <- expected\n\n");

	printf("%s", nmatch("", "abc*"), 0);
	printf("%s", nmatch("f", "abc*"), 0);
	printf("%s", nmatch("abbc", "abc*"), 0);
	printf("%s", nmatch("ab", "abc*"), 0);
	printf("%s", nmatch("abb", "abc*"), 0);
	printf("\n00000 <- expected\n\n");
// 50

	printf("%s", nmatch("abc", "*abc"), 1);
	printf("%s", nmatch("defabc", "*abc"), 1);
	printf("%s", nmatch("aaaaaaabc", "*abc"), 1);
	printf("%s", nmatch("abcabc", "*abc"), 1);
	printf("%s", nmatch("abcdabcdabc", "*abc"), 1);
	printf("\n11111 <- expected\n\n");

	printf("%s", nmatch("", "*abc"), 0);
	printf("%s", nmatch("f", "*abc"), 0);
	printf("%s", nmatch("abbc", "*abc"), 0);
	printf("%s", nmatch("ab", "*abc"), 0);
	printf("%s", nmatch("abb", "*abc"), 0);
	printf("\n00000 <- expected\n\n");

	printf("%s", nmatch("a", "*a*"), 1);
	printf("%s", nmatch("aaa", "*a*"), 3);
	printf("%s", nmatch("aaabc", "*a*"), 3);
	printf("%s", nmatch("bcabc", "*a*"), 1);
	printf("%s", nmatch("sdfa", "*a*"), 1);
	printf("\n13311 <- expected\n\n");

	printf("%s", nmatch("", "*a*"), 0);
	printf("%s", nmatch("f", "*a*"), 0);
	printf("%s", nmatch("bcd", "*a*"), 0);
	printf("%s", nmatch("bb", "*a*"), 0);
	printf("%s", nmatch("ASDF", "*a*"), 0);
	printf("\n00000 <- expected\n\n");

	printf("%s", nmatch("ab", "*ab*"), 1);
	printf("%s", nmatch("abcd", "*ab*"), 1);
	printf("%s", nmatch("efabcd", "*ab*"), 1);
	printf("%s", nmatch("ababab", "*ab*"), 3);
	printf("%s", nmatch("bab", "*ab*"), 1);
	printf("\n11131 <- expected\n\n");

	printf("%s", nmatch("asdf", "*ab*"), 0);
	printf("%s", nmatch("ba", "*ab*"), 0);
	printf("%s", nmatch("", "*ab*"), 0);
	printf("%s", nmatch("f", "*ab*"), 0);
	printf("%s", nmatch("bbbbbbaaaaa", "*ab*"), 0);
	printf("\n00000 <- expected\n\n");

	printf("%s", nmatch("", "**"), 1);
	printf("%s", nmatch("a", "**"), 2);
	printf("%s", nmatch("ab", "**"), 3);
	printf("%s", nmatch("abc", "**"), 4);
	printf("%s", nmatch("abcd", "**"), 5);
	printf("\n12345 <- expected\n\n");

	printf("%s", nmatch("a", "a**"), 1);
	printf("%s", nmatch("ab", "a**"), 2);
	printf("%s", nmatch("abc", "a**"), 3);
	printf("%s", nmatch("aaaa", "a**"), 4);
	printf("%s", nmatch("asdfa", "a**"), 5);
	printf("\n12345 <- expected\n\n");

	printf("%s", nmatch("", "a**"), 0);
	printf("%s", nmatch("f", "a**"), 0);
	printf("%s", nmatch("fa", "a**"), 0);
	printf("%s", nmatch("faaaaaaa", "a**"), 0);
	printf("%s", nmatch("fafdsafdsa", "a**"), 0);
	printf("\n00000 <- expected\n\n");

	printf("%s", nmatch("asdf", "*a**"), 4);
	printf("%s", nmatch("sdfa", "*a**"), 1);
	printf("%s", nmatch("faffff", "*a**"), 5);
	printf("%s", nmatch("fdsaasdf", "*a**"), 9);
	printf("%s", nmatch("aaaaaaa", "*a**"), 28);
	printf("\n415928 <- expected\n\n");
// 100

	printf("%s", nmatch("", "*a**"), 0);
	printf("%s", nmatch("qwerqwer", "*a**"), 0);
	printf("%s", nmatch("bbbbbb", "*a**"), 0);
	printf("%s", nmatch("c", "*a**"), 0);
	printf("%s", nmatch("AAAAAAAAAA", "*a**"), 0);
	printf("\n00000 <- expected\n\n");

	printf("%s", nmatch("main.c", "*.c"), 1);
	printf("%s", nmatch("main.c.c", "*.c"), 1);
	printf("%s", nmatch("main.h", "*.c"), 0);
	printf("%s", nmatch("main.cc", "*.c"), 0);
	printf("%s", nmatch("main.c", "*.*"), 1);
	printf("\n11001 <- expected\n\n");

	printf("%s", nmatch("test.main.c", "test.*.c"), 1);
	printf("%s", nmatch("test..c", "test.*.c"), 1);
	printf("%s", nmatch("test.main.h", "test.*.c"), 0);
	printf("%s", nmatch("main.c", "test.*.c"), 0);
	printf("%s", nmatch("test.c", "test.*.c"), 0);
	printf("\n11000 <- expected\n\n");

	printf("%s", nmatch("abcde", "a*c*e"), 1);
	printf("%s", nmatch("abcde", "*b*d*"), 1);
	printf("%s", nmatch("abcde", "a*e*c"), 0);
	printf("%s", nmatch("abcde", "*d*c*"), 0);
	printf("%s", nmatch("abcde", "a*d*d"), 0);
	printf("\n11000 <- expected\n\n");

	printf("%s", nmatch("abcbd", "*b*"), 2);
	printf("%s", nmatch("abc", "a**"), 3);
	printf("%s", nmatch("test.asdf.c.bak", "*.*.*"), 3);
	printf("%s", nmatch("test.bak", "*.*.*"), 0);
	printf("%s", nmatch("", "************************"), 1);
	printf("\n23301 <- expected\n\n");

	printf("%s", nmatch("*a", "*"), 1);
	printf("%s", nmatch("**", "*"), 1);
	printf("%s", nmatch("*ab", "*b"), 1);
	printf("%s", nmatch("a*a", "a*"), 1);
	printf("%s", nmatch("**a", "*a"), 1);
	printf("\n11111 <- expected\n\n");

}
