var addTwoPromises = async function(p1, p2) {
    return (await p1)+(await p2);
};