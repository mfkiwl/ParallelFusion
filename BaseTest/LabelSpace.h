#ifndef LABEL_SPACE_H__
#define LABEL_SPACE_H__

#include <vector>

//Label space management
class LabelSpace
{
 public:
 LabelSpace() : num_nodes_(0) {};  
LabelSpace(const int NUM_NODES) : num_nodes_(NUM_NODES), label_space_(NUM_NODES) {};
  LabelSpace(const std::vector<int> &single_labels);
  LabelSpace(const std::vector<std::vector<int> > &label_space);

  std::vector<std::vector<int> > getLabelSpace() const { return label_space_; };
  void clear();
  void assign(const int NUM_NODES, const std::vector<int> &node_labels = std::vector<int>()) { num_nodes_ = NUM_NODES; label_space_.assign(NUM_NODES, node_labels); };
  void setSingleLabels(const std::vector<int> &single_labels);
  void setLabelSpace(const std::vector<std::vector<int> > label_space) { num_nodes_ = label_space.size(); label_space_ = label_space; };

  LabelSpace &operator += (const LabelSpace &rhs);
  
  friend LabelSpace operator + (const LabelSpace &lhs, const LabelSpace &rhs);
  
  
 private:
  int num_nodes_;
  std::vector<std::vector<int> > label_space_;
};

#endif
