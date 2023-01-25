// https://leetcode.com/problems/find-closest-node-to-given-two-nodes/

/*
class Solution {
public:
    void dfs(int node, vector<int> & edges, vector<int> & dist, vector<bool> & visited) {
        visited[node] = true;
        int neighbour = edges[node];
        if(neighbour != -1 && visited[neighbour] == false) {
            dist[neighbour] = dist[node] + 1;
            dfs(neighbour, edges, dist, visited);
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        int ans = -1;
        int minDist = INT_MAX;
        vector<int> dist1(n, 0), dist2(n, 0);
        vector<bool> visited1(n, false), visited2(n, false);
        dfs(node1, edges, dist1, visited1);
        dfs(node2, edges, dist2, visited2);
        for(int i = 0; i < n; i++) {
            if(visited1[i] == true && visited2[i] == true && minDist > max(dist1[i], dist2[i])) {
                minDist = max(dist1[i], dist2[i]);
                ans = i;
            }
        }
        return ans;
    }
};
*/