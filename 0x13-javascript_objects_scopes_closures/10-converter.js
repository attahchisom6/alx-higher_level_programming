#!/usr/bin/node
/*
 * this programme converts a number from basr to any base
 */

exports.converter = function (base) {
  function denaryToAnyBase (num) {
    return (num.toString(base));
  }
  return (denaryToAnyBase);
};
