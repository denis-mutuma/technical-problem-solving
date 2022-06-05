package codewars

func Points(games []string) int {
	// your code here!
	// var points = 0
	// loop through games array
	// if games[0][0] > games[0][2]
	// points += 3
	// else if games[0][0] == games[0][2]
	// points += 1
	// return points

	points := 0
	for _, game := range games {
		if game[0] > game[2] {
			points += 3
		} else if game[0] == game[2] {
			points += 1
		}
	}
	return points
}
