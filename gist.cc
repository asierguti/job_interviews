void dfs(std::ostream& output) const {
    std::list<graph*> list;

    auto children = _g->children();
    for (auto it = children.rbegin(); it != children.rend(); ++it) {
            list.push_back(it->get());
    }

    while (!list.empty()) {
        auto node = list.front();
        list.pop_front();

        children = node->children();
        for (auto it = children.rbegin(); it != children.rend(); ++it) {
                list.push_front(it->get());
        }
        output << node->value() << std::endl;
    }

    void bfs(std::ostream& output) const {
    std::list<graph*> list;

    auto children = _g->children();
    for (auto it = children.begin(); it != children.end(); ++it) {
            list.push_back(it->get());
    }

    while (!list.empty()) {
        auto node = list.front();
        list.pop_front();

        children = node->children();
        for (auto it = children.begin(); it != children.end(); ++it) {
                list.push_back(it->get());
        }
        output << node->value() << std::endl;
    }
}
