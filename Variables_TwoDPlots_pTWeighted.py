# -*- coding: utf-8 -*-
# @Author: Ram Krishna Sharma
# @Author Email: ram.krishna.sharma@cern.ch
# @Date:   2021-06-14
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-06-15
twoD_var_list = [
    ['TauB_Inc_0j_CorrRapidity', 51,-4.7, 4.7, 'TauB_Inc_0j',
        # 100, 0, 1.0,
        100, 0, 200.0,
        r'$\eta_{j}$',
        # r'$f(y_{j}) = e^{-|y_{j}|}$'
        r'$f(y_{j}) = e^{-p_{Tj} |y_{j}|}$'
    ],
    ['TauB_Inc_1j_CorrRapidity', 51,-4.7, 4.7, 'TauB_Inc_1j',
        # 100, 0, 1.0,
        100, 0, 200.0,
        r'$\eta_{j}$',
        # r'$f(y_{j}) = e^{-|y_{j}|}$'
        r'$f(y_{j}) = e^{-p_{Tj} |y_{j}|}$'
    ],
    ['TauB_Inc_2j_CorrRapidity', 51,-4.7, 4.7, 'TauB_Inc_2j',
        # 100, 0, 1.0,
        100, 0, 200.0,
        r'$\eta_{j}$',
        # r'$f(y_{j}) = e^{-|y_{j}|}$'
        r'$f(y_{j}) = e^{-p_{Tj} |y_{j}|}$'
    ],
    ['TauB_JetConstituents_0j_CorrRapidity', 51,-4.7, 4.7, 'TauB_JetConstituents_0j',
        # 100, 0, 200.0,
        100, 0, 200.0,
        r'$\eta_{j}$',
        # r'$f(y_{j}) = e^{-|y_{j}|}$'
        r'$f(y_{j}) = e^{-p_{Tj} |y_{j}|}$'
    ],
    ['TauB_JetConstituents_1j_CorrRapidity', 51,-4.7, 4.7, 'TauB_JetConstituents_1j',
        # 100, 0, 200.0,
        100, 0, 200.0,
        r'$\eta_{j}$',
        # r'$f(y_{j}) = e^{-|y_{j}|}$'
        r'$f(y_{j}) = e^{-p_{Tj} |y_{j}|}$'
    ],
    ['TauB_JetConstituents_2j_CorrRapidity', 51,-4.7, 4.7, 'TauB_JetConstituents_2j',
        # 100, 0, 200.0,
        100, 0, 200.0,
        r'$\eta_{j}$',
        # r'$f(y_{j}) = e^{-|y_{j}|}$'
        r'$f(y_{j}) = e^{-p_{Tj} |y_{j}|}$'
    ],
    ['TauC_Inc_0j_CorrRapidity', 51,-4.7, 4.7, 'TauC_Inc_0j',
        # 100, 0.4, 70.0,
        100, 0.4, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j})}$ '
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j} - Y_H)}$ '
    ],
    ['TauC_Inc_1j_CorrRapidity', 51,-4.7, 4.7, 'TauC_Inc_1j',
        # 100, 0.4, 70.0,
        100, 0.4, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j} - Y_H)}$ '
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j} - Y_H)}$ '
    ],
    ['TauC_Inc_2j_CorrRapidity', 51,-4.7, 4.7, 'TauC_Inc_2j',
        # 100, 0.4, 70.0,
        100, 0.4, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j} - Y_H)}$ '
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j} - Y_H)}$ '
    ],
    ['TauC_JetConstituents_0j_CorrRapidity', 51,-4.7, 4.7, 'TauC_JetConstituents_0j',
        # 100, 0, 70.0,
        100, 0, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j} - Y_H)}$'
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j} - Y_H)}$'
    ],
    ['TauC_JetConstituents_1j_CorrRapidity', 51,-4.7, 4.7, 'TauC_JetConstituents_1j',
        # 100, 0, 70.0,
        100, 0, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j} - Y_H)}$'
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j} - Y_H)}$'
    ],
    ['TauC_JetConstituents_2j_CorrRapidity', 51,-4.7, 4.7, 'TauC_JetConstituents_2j',
        # 100, 0, 70.0,
        100, 0, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j} - Y_H)}$'
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j} - Y_H)}$'
    ],
    ['TauCnoHRapidity_JetConstituents_0j_CorrRapidity', 51,-4.7, 4.7, 'TauCnoHRapidity_JetConstituents_0j',
        # 100, 0, 70.0,
        100, 0, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j} - Y_H)}$'
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j} - Y_H)}$'
    ],
    ['TauCnoHRapidity_JetConstituents_1j_CorrRapidity', 51,-4.7, 4.7, 'TauCnoHRapidity_JetConstituents_1j',
        # 100, 0, 70.0,
        100, 0, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j})}$'
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j})}$'
    ],
    ['TauCnoHRapidity_JetConstituents_2j_CorrRapidity', 51,-4.7, 4.7, 'TauCnoHRapidity_JetConstituents_2j',
        # 100, 0, 70.0,
        100, 0, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j})}$'
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j})}$'
    ],
    ['TauCnoHRapidity_Inc_0j_CorrRapidity', 51,-4.7, 4.7, 'TauCnoHRapidity_Inc_0j',
        # 100, 0.25, 70.0,
        100, 0.25, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j})}$'
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j})}$'
    ],
    ['TauCnoHRapidity_Inc_1j_CorrRapidity', 51,-4.7, 4.7, 'TauCnoHRapidity_Inc_1j',
        # 100, 0.25, 70.0,
        100, 0.25, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j})}$'
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j})}$'
    ],
    ['TauCnoHRapidity_Inc_2j_CorrRapidity', 51,-4.7, 4.7, 'TauCnoHRapidity_Inc_2j',
        # 100, 0.25, 70.0,
        100, 0.25, 70.0,
        r'$\eta_{j}$',
        # r'$f(y_{j})=\frac{1}{2cosh(y_{j})}$'
        r'$f(y_{j})=\frac{p_{Tj}}{2cosh(y_{j})}$'
    ]

]
