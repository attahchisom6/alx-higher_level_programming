#!/usr/bin/node
/*
 * script to get  users that have completed a task from an api, and the number of task they completed
 */

const request = require('request');
const url = process.argv[2];

request.get(url, (error, response, body) => {
  if (error) {
    console.log(error);
  }

  const taskDone = {};
  const Jdata = JSON.parse(body);
  Jdata.forEach(task => {
    if (task.completed) {
      if (!taskDone[task.userId]) {
        taskDone[task.userId] = 1;
      } else {
        taskDone[task.userId] += 1;
      }
    }
  });
  console.log(taskDone);
});
