#!/usr/bin/node

/*
 * This function gets the index of each argument passed to it
 */

let numArgs = 0;

exports.logMe = function (item) {
  const x = `${numArgs}` + ': ' + `${item}`;
  console.log(x);
  numArgs++;
};
