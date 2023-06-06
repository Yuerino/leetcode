class Solution {
public:
    bool canFinish(int numCourses, std::vector<std::vector<int>>& prerequisites) {
        std::vector<std::vector<int>> graph(numCourses);
        std::vector<int> indegrees(numCourses);

        for (auto&& prereq : prerequisites) {
            graph[prereq[1]].push_back(prereq[0]);
            ++indegrees[prereq[0]];
        }

        std::queue<int> q;
        for (int i = 0; int indegree : indegrees) {
            if (indegree == 0) q.push(i);
            ++i;
        }

        int current = 0;
        while (!q.empty()) {
            current = q.front();
            q.pop();
            --numCourses;
            for (int next : graph[current]) {
                --indegrees[next];
                if (indegrees[next] == 0) q.push(next);
            }
        }

        return numCourses == 0;
    }
};
