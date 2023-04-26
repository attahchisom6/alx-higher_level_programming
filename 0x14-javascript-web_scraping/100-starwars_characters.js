#!/usr/bin/node
/*
 * A script to get all characters of the star war genre from its api, then print each name per line
 */

const request = require('request');
const epiID = process.argv[2];
const url = `https://swapi.dev/api/films/${epiID}`;

request.get(url, (error, response, body) => {
  if (error) {
    console.log(error);
  }

  const Jdata = JSON.parse(body).characters;
  Jdata.forEach(character => {
    request.get(character, (error, response, body) => {
      if (error) {
        console.log(error);
      } else {
        const Jchar = JSON.parse(body);
        console.log(Jchar.name);
      }
    });
  });
});
