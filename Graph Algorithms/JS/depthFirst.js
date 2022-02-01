//using loops
const depthFirstPrintLoop = (graph, source) => {
  const stack = [source];

  while (stack.length > 0) {
    const current = stack.pop();
    console.log(current);

    for (let neighbor of graph[current]) {
      stack.push(neighbor);
    }
  }
};

//using recursion
const depthFirstPrintRec = (graph, source) => {
  console.log(source);
  for (let neighbor of graph[source]) {
    depthFirstPrintRec(graph, neighbor);
  }
};

//the two graphs
const graph1 = {
  a: ["b", "c"],
  b: ["d"],
  c: ["e"],
  d: ["f"],
  e: [],
  f: [],
};
const graph2 = {
  a: ["c", "b"],
  b: ["d"],
  c: ["e"],
  d: ["f"],
  e: [],
  f: [],
};

//output (using loops)
depthFirstPrintLoop(graph1, "a");
console.log("\n");
depthFirstPrintLoop(graph2, "a");
console.log("\n");
console.log("\n");

//output (using recursion)
depthFirstPrintRec(graph1, "a");
console.log("\n");
depthFirstPrintRec(graph2, "a");
