#pragma once

#include <vector>

namespace BaseStructures {

    template <class T>
    class Array {
        public:
            void Reserve(size_t size);
            void PushBack(const T& value);
            void PopBack();
            size_t GetSize() const;

            T& at(size_t idx);
            const T& operator[](size_t idx) const;

        private:
            std::vector<T> buffer_;
    };


    // Implementation

    template <class T>
    void Array<T>::Reserve(size_t size) {
        buffer_.reserve(size);
    }

    template <class T>
    void Array<T>::PushBack(const T& value) {
        buffer_.push_back(value);
    }

    template <class T>
    size_t Array<T>::GetSize() const {
        return buffer_.size();
    }

    template <class T>
    void Array<T>::PopBack() {
        buffer_.pop_back();
    }

    template <class T>
    T& Array<T>::at(size_t idx) {
        return buffer_[idx];
    }

    template <class T>
    const T& Array<T>::operator[](size_t idx) const {
        return buffer_[idx];
    }

    template <class T>
    Array<T> operator+(const Array<T>& lhs, const Array<T>& rhs) {
        size_t size = lhs.GetSize();
        Array<T> result(size);
        for (size_t i = 0; i < size; ++i) {
            result.PushBack(lhs[i] + rhs[i]);
        }
        return result;
    }
}

