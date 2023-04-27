#!/usr/bin/node
/*
 * script to get a synchronous list names from an api, that is the list is got in other in which it placed on the api
 */

const request = require('request');
const epiId = process.argv[2];
const url = `https://swapi.dev/api/films/${epiId}`;

request.get(url, async (error, response, body) => {
  if (error) {
    console.log(error);
  }

  const Jdata = JSON.parse(body).characters;
  for (const character of Jdata) {
    const name = await new Promise((resolve, reject) => {
      request.get(character, (error, response, body) => {
        if (error) {
          reject(error);
        } else {
          const Jchar = JSON.parse(body);
          resolve(Jchar.name);
        }
      });
    });
    console.log(name);
  }
});
