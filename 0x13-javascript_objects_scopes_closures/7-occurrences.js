#!/usr/bin/node
/*
 * This program is to search for the number of occurrrences of
 * a character in a in a list
 */

exports.nbOccurences = function (list, searchElement) {
  let nbOccurences = 0;
  for (const item of list) {
    if (item === searchElement) {
      nbOccurences += 1;
    }
  }
  return (nbOccurences);
};
