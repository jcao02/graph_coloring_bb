#include <sstream>
#include <vector>
#include <tuple>
#include <array>

typedef struct {
    short degree, dsat, vertex;
} TNode;

inline bool operator==(const TNode& lhs,const TNode& rhs) {
    return lhs.vertex == lhs.vertex && lhs.degree == lhs.degree && lhs.dsat == lhs.dsat;
}

class Graph {
public:
    Graph(short nVertex);
    void addEdge(short first, short second);
    std::vector< short > getAdjacents(short vertex);
    std::tuple< short, std::vector<short>, std::vector<short> > dsatur();
    bool colorVertex(short vertex, short color, std::vector< TNode >& nodes
                    , std::vector< short >& colored);

    std::array< std::vector< short >, 10000 > adjacentsList;
    short nVertex;
};

std::stringstream filterComments(std::istringstream& input);
void buildGraph(std::istringstream& input, Graph& graph);