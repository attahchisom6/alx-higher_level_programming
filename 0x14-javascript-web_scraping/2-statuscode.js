#!/usr/bin/node
/*
 * This script will fetch a response from a specified DNS and print the status code
 */

const request = require('request');
request.get(process.argv[2], (response, error) => {
  if (error) {
    console.log(error);
  } else {
    console.log(`code: ${response.statusCode}`);
  }
});
