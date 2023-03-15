#!/usr/bin/node
/*
 * this progrogram is to reverse the content of a list
 */

exports.esrever = function (list) {
  const myList = [];
  const len = list.length;
  let k = 0;

  let p = len - 1;
  while (p >= 0) {
    myList[k] = list[p];
    k++;
    p--;
  }
  return (myList);
};
